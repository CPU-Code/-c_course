/*
 * @Author: cpu_code
 * @Date: 2020-06-15 17:47:32
 * @LastEditTime: 2020-06-15 18:51:51
 * @FilePath: \c_course\contact_project\main.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>
#include <stdlib.h>

typedef struct Contact
{
    char name[20];
    char phone[20];
    char addr[20];
}Contact;

#define N 20

int load_data(Contact contact_list[]);
void modify_contact(Contact contact_list[], int count);
void print_contact(Contact contact_list[], int count);
void add_new_contact();
void sort_data(Contact contact_list[], int count);
void delete_contact(Contact contact_list[], int count);
void find_contact(Contact contact_list[], int count);
void show_menu();

int main()
{
    int count = 0;
    Contact contact_list[N];
    char ch;

    count = load_data(contact_list);
    if (count == -1)
    {
        return 0;
    }

    show_menu();

    printf("数据加载成功, 输入你需要的操作:\n");
    scanf("%c", &ch);

    while (ch != 'q')
    {
        switch (ch)
        {
            case 'a':
                add_new_contact();
                count = load_data(contact_list);
                break;
            case 'd':
                delete_contact(contact_list, count);
                count = load_data(contact_list);
                break;
            case 'f':
                find_contact(contact_list, count);
                break;
            case 'm':
                modify_contact(contact_list, count);
                count = load_data(contact_list);
                break;
            case 'p':
                print_contact(contact_list, count);
                break;
            default:
                printf("输入的命令有误!\n");
                break;
        }

        printf("\n输入你需要的操作:\n");
        fflush(stdin);
        scanf("%c", &ch);
    }
    printf("退出系统!\n");
    
    return 0;
}

//加载通信录数据
int load_data(Contact contact_list[])
{
    int count = 0;
    FILE *fp;

    if ((fp = fopen("data.txt", "ab+")) == NULL)
    {
        printf("载入数据失败!\n");
        return -1;
    }

    while (!feof(fp))
    {
        if (fread(&contact_list[count], sizeof(Contact), 1, fp) == 1)
        {
            count++;
        }
    }
    fclose(fp);

    sort_data(contact_list, count);

    printf("当前有%d个联系人\n", count);

    return count;
}

//修改联系人(仅限修改号码)
void modify_contact(Contact contact_list[], int count)
{
    int i;
    char name[20];
    FILE *fp;

    printf("请输入需要修改的联系人姓名:");
    scanf("%s", name);

    for (i = 0; i < count; i++)
    {
        if (strcmp(contact_list[i].name, name) == 0)
        {
            break;
        }
    }
    if (i == count)
    {
        printf("没有该联系人信息!\n");
        return;
    }
    printf("请输入%s的新号码:", name);
    scanf("%s", &contact_list[i].phone);


    if ((fp = fopen("data.txt", "wb")) == NULL)
    {
        printf("修改联系人失败!\n");
        return;
    }
    fwrite(&contact_list[0], sizeof(Contact), count, fp);
    fclose(fp);
    printf("修改成功!\n");
}


//显示联系人
void print_contact(Contact contact_list[], int count)
{
    int i;
    if (count == 0)
    {
        printf("当前没有联系人!\n");
        return;
    }
    printf("姓名\t  号码\t  地址\n");
    for (i = 0; i < count; i++)
    {
        printf("%s\t%s\t%s\n", contact_list[i].name, contact_list[i].phone, contact_list[i].addr);
    }
}


//添加联系人
void add_new_contact()
{
	Contact contact;
    FILE *fp;

    printf("请输入添加的联系人信息:\n");
    printf("姓名:");
    scanf("%s", contact.name);
    printf("号码:");
    scanf("%s", contact.phone);
    printf("地址:");
    scanf("%s", contact.addr);

    if ((fp = fopen("data.txt", "ab+")) == NULL)
    {
        printf("添加联系人失败!\n");
        return;
    }

    fwrite(&contact, sizeof(Contact), 1, fp);
    fclose(fp);
    printf("添加联系人成功!\n");
}


//删除联系人
void delete_contact(Contact contact_list[], int count)
{
    int i, j;
    char name[20];
    FILE *fp;

    printf("输入需要删除的联系人姓名:\n");
    scanf("%s", name);

    for (i = 0; i < count; i++)
    {
        if (strcmp(contact_list[i].name, name) == 0)
        {
            break;
        }
    }
	if (i == count)
    {
        printf("没有该联系人的信息!\n");
        return;
    }
    for (j = i; j < count - 1; j++)
    {
        contact_list[j] = contact_list[j+1];
    }


    if ((fp = fopen("data.txt", "wb")) == NULL)
    {
        printf("打开文件错误,删除失败!\n");
        return;
    }

    fwrite(&contact_list[0], sizeof(Contact), count-1, fp);

    fclose(fp);
}


//对联系人数据进行排序(按姓名的字母表顺序)
void sort_data(Contact contact_list[], int count)
{
    int i, j, flag;
    Contact temp;

    for (i = 1; i < count; i++)
    {
        flag = 0;

        for (j = count-1; j >= i; j--)
        {
            if (strcmp(contact_list[j - 1].name, contact_list[j].name) > 0)
            {
                flag = 1;
                temp = contact_list[j];
                contact_list[j] = contact_list[j-1];
                contact_list[j-1] = temp;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}



//查找联系人

void find_contact(Contact contact_list[], int count)
{
    int i;
    char name[20];
    printf("输入需要查找的联系人姓名:");
    scanf("%s", name);

    for (i = 0; i < count; i++)
    {
        if (strcmp(contact_list[i].name, name) == 0)
        {
            printf("姓名:%s, 号码:%s, 地址:%s\n", contact_list[i].name, contact_list[i].phone, contact_list[i].addr);
            break;
        }
    }

    if (i == count)
    {
        printf("没有该联系人信息!\n");
    }
}

//显示菜单
void show_menu()
{
    printf("\n**************************************\n");
	printf("*                                   *\n");
    printf("*           通信录管理系统          *\n");
    printf("*  a-增加联系人                     *\n");
    printf("*  d-删除联系人                     *\n");
    printf("*  f-查找联系人                     *\n");
    printf("*  m-修改联系人                     *\n");
    printf("*  p-显示联系人                     *\n");
    printf("*  q-退出系统                       *\n");
    printf("*                                   *\n");
    printf("**************************************\n");
}