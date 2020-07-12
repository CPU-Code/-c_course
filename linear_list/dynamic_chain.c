/*
 * @Author: cpu_code
 * @Date: 2020-06-24 21:37:03
 * @LastEditTime: 2020-06-24 21:48:33
 * @FilePath: \c_course\linear_list\dynamic_chain.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>
#include <stdlib.h>

//线性表（动态分配空间）

#define MAXSIZE 3

typedef struct 
{
	int *elem;		//动态链表
	int length;		//已使用的个数
	int listsize;	//总个数
}Sqlist;

/*初始化一个动态链表申请MAXSIZE 个int 类型 数据的内存空间*/
void initSqlist(Sqlist * L)
{
	L->elem = (int *)malloc(MAXSIZE * sizeof(int));
	if(L->elem == NULL)// 如果malloc申请内存失败
	{
		exit(-1);
	}
	L->length = 0;	// 已使用的个数 为0 
	L->listsize = MAXSIZE;// 申请总个数为MAXSIZE 个单位数据结构
}

// 在表L中的第i个位置，插入 item
void insertElem(Sqlist *L, int i, int item)
{
	int *base, *insertptr, *p;

	if (i < 0 || i  >  L->length)
	{
		printf("插入位置不对\n");
		exit(0);
	}
	
	//内存空间是否用完
	if (L->length == L->listsize)
	{
		//动态追加新的一个内存空间
		base = (int *)realloc(L->elem, (L->listsize + 1)*sizeof(int));
		
		L->elem = base;
		L->listsize++;
	}

	insertptr = &(L->elem[i]);// 得到插入地点的地址
	
	if( i <  L->length )// 当插入的位置在前length个 的某个位置的时候。
	{
		for(p = &(L->elem[L->length - 1]); p >= insertptr; p--)// 从最后一个元素，依次往后挪
		{
			*(p + 1) = *p;
		}
	}

	*insertptr = item;// 插入要插入的数
	L->length++; // 使用的位置数目加一
	
	printf("insert L->elem[%d] = %d\n", i, L->elem[i]);
}


int main()
{
	Sqlist L;
	int i = 0;

	initSqlist(&L);

	insertElem(&L, 0, 0);
	insertElem(&L, 1, 1);
	insertElem(&L, 2, 2);
	insertElem(&L, 2, 3);
	insertElem(&L, 4, 4);

	for(i = 0; i < 5; i++)
	{
		printf("L->elem[%d] = %d\n", i, L.elem[i]);
	}
	
	return 0;
}
/*
insert L->elem[0] = 0
insert L->elem[1] = 1
insert L->elem[2] = 2
insert L->elem[2] = 3
insert L->elem[4] = 4
L->elem[0] = 0
L->elem[1] = 1
L->elem[2] = 3
L->elem[3] = 2
L->elem[4] = 4
*/