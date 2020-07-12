/*
 * @Author: cpu_code
 * @Date: 2020-06-26 19:11:34
 * @LastEditTime: 2020-06-26 21:35:10
 * @FilePath: \c_course\linked_list\init_one_list.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define EXIT_CMD			0
#define CREATE_CMD			1
#define INSERT_CMD			2
#define DELETE_CMD			3
#define SEARCH_CMD			4
#define PRINT_CMD			5

typedef struct node
{
	int num;
	int age;
	struct node *next;

}TYPE;

TYPE * creat(int n);
TYPE * delete(TYPE * head, int num);
TYPE * insert(TYPE * head, TYPE * pi);
TYPE * search(TYPE * head, int num);
void print(TYPE * head);

void display(void)
{
	printf("/**************************/\n");
	printf("/***   1:   创建链表    ***/\n");
	printf("/***   2:   插入链表    ***/\n");
	printf("/***   3:   删除链表    ***/\n");
	printf("/***   4:   搜索链表    ***/\n");
	printf("/***   5:   输出链表    ***/\n");
	printf("/***   0:   退出链表    ***/\n");
	printf("/**************************/\n");

}

int main(void)
{
	TYPE *head = NULL, *Lsearch = NULL, *ins = NULL;
	int delnum = 0, searnum = 0;
	int menu = 0, link_num = 0;

	while(1)
	{
		display();
		scanf("%d", &menu);

		switch(menu)
		{
            case CREATE_CMD :
                printf("input create link Number:\n");
                scanf("%d",&link_num);
                head = creat(link_num);
                print(head);        //打印创建的链表
                break;

            case INSERT_CMD :
                ins = (TYPE *)malloc(sizeof(TYPE));

                printf("insert Number and Age:\n");
                scanf("%d%d", &ins->num, &ins->age);
                head = insert(head, ins);

                print(head);    //打印插入节点后的链表	
                break;

            case DELETE_CMD :
                printf("input delete Number:\n");
                scanf("%d", &delnum);
                head = delete(head, delnum);
				
                print(head);     //打印删除一个节点后的链表	
                break;

            case SEARCH_CMD :
                printf("input search Number:\n");
                scanf("%d",&searnum);
                Lsearch = search(head, searnum);  
                print(Lsearch);       //从搜索到的节点开始打印
                break;

            case PRINT_CMD :
                print(head);         //从搜索到的节点开始打印
                break;

            case EXIT_CMD :
                return 0;
                break;

            default:
                printf("请按提示菜单, 输入有效数据进行操作！\n");
                break;

		}
	}
}

/**
 * @function: 创建一个具有n个节点的链表，并对其值进行初始化
 * @parameter: 
 *      n: 链表的长度，即节点的个数
 * @return: 
 *     success: 所创建链表的首地址
 *     error: 
 * @note: 
 */
TYPE * creat(int n)
{
	TYPE *head, *pf, *pb;
	int i;

	for(i = 0; i < n; i++)
	{
		pb = (TYPE *)malloc(sizeof(TYPE));

		printf("input Number and Age:\n");
		scanf("%d%d", &pb->num, &pb->age);

		if(i == 0)
        {
            pf = head = pb;
        }
		else
        {
			//pf -> pb
            pf->next = pb;
        }
		pf = pb;
	}
	//pb -> null
	pb->next = NULL;

	return(head);
}

/**
 * @function: 删除给定序号所指向的节点
 * @parameter: 
 *      *head:待删除链表
 *      num： 所需删除的节点
 * @return: 
 *     success: 删除指定节点后的新链表首址
 *     error: 
 * @note: 
 */
TYPE * delete(TYPE * head,int num)
{
	TYPE *pf, *pb;

	if(head == NULL)
	{ 
		printf("\nempty list!\n");
		goto end;
	}

	pb = head;
	while(pb->num != num && pb->next != NULL)
	{
		// pf -> pb
		pf = pb;
		pb = pb->next;
	} 

	if(pb->num == num)
	{ 
        if(pb == head)
        {
			//pb -> head
            head = pb->next;
        }
        else
        {
			//pf -> pb的下一个节点 == pb删除
            pf->next = pb->next;
        }
		
        free(pb);
        printf("The node is deleted\n"); 
	}
	else
    {
		printf("The node not been found!\n");
    }
    
end:
	return head;
}

/**
 * @function: 将新申请的节点加入到指定链表中，并按照num进行从小到大排序
 * @parameter: 
 *      *head: 待插入链表
 *      *pi：带插入节点
 * @return: 
 *     success: 插入指定节点后的新链表首址
 *     error: 
 * @note: 
 */
TYPE * insert(TYPE * head, TYPE * pi)
{
	TYPE *pb = head;
    TYPE *pf;
	
	if(head == NULL)    //如果为空就建立，空间在传入前申请好
	{ 
		// pi -> null
		head = pi;
		pi->next = NULL; 
	}
	else
	{
		while( (pi->num > pb->num) && (pb->next != NULL) ) //找到一个比插入值大的节点，然后插在它的前面
		{ 
			// pf -> pb
			pf = pb;    	//pf指向前，pb指向后
			pb = pb->next;   //节点后移
		}
		
	  	if(pi->num <= pb->num)	//找到所要插入节点位置，插到pb的前面
		{ 
			if(head == pb)
			{
				// pi -> pb
				head = pi;   //在第一结点之前插入
				pi->next = pb;
			}
			else 
			{
				// pf -> pi -> pb
				pf->next = pi;   //在中间位置插入
				pi->next = pb; 
			}
		}
		else	//只有pb->next为空才会成立
		{ 
			//pb -> pi -> NULL
			pb->next = pi;
			pi->next = NULL;	//在表末插入
		}
	}
	
	return head;
}

/**
 * @function: 搜索给定序号所指向的节点
 * @parameter: 
 * 		*head: 待搜索链表
 * 		num： 按所需进行节点搜索
 * @return: 
 *     success: 搜索到的节点首址
 *     error: 
 * @note: 
 */
TYPE * search(TYPE * head, int num)
{
	TYPE *pb = head;
	
	if(head == NULL)
	{ 
		return head;
	}
	
	while( (pb->num != num) && (pb->next != NULL) ) 
	{ 
		pb = pb->next;	 //节点后移
	}
	
	if (pb->num == num)
	{
		return pb;
	}
	else
	{
		return head;
	}
}

/**
 * @function: 打印指定链表中的全部节点数据
 * @parameter: 
 *      *head：待打印的链表首址
 * @return: 
 *     success: 
 *     error: 
 * @note: 
 */
void print(TYPE * head)
{
	printf("\n链表所有信息如下：\n");
	printf("Number\t\tAge\n");

	while(head != NULL)
	{
		printf("%d\t\t%d\n", head->num, head->age);
		
        head = head->next;
	}

	printf("\n");

}


