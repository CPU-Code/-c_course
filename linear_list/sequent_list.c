/*
 * @Author: cpu_code
 * @Date: 2020-06-24 22:42:58
 * @LastEditTime: 2020-06-24 22:47:26
 * @FilePath: \c_course\linear_list\sequent_list.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10

typedef int ElemType;	/*将int定义为ElemType*/

typedef struct
{
	ElemType *elem;
	int length;
	int listsize;
}Sqlist;

/**
 *初始化一个顺序表
 *参数L：Sqlist类型的指针
 */
void initSqlist(Sqlist *L)
{
	L->elem = (ElemType *)malloc(MaxSize * sizeof(ElemType ) );
	if(L->elem == NULL)
	{
		exit(0);
	}
	
	L->length = 0;
	L->listsize = MaxSize;
	
	return;
}

/**
 *向顺序表中插入元素
 *参数L：Sqlist类型的指针
 *参数i: 插入元素的位置
 *参数item: 插入的元素
 */
void InsertElem(Sqlist *L, int i, ElemType item)
{
	/*向顺序表L中的第i个位置上插入元素item*/
	ElemType *base, *insertPtr, *p;

	if(i < 1 || i > L->length + 1)
	{
		exit(0);
	}
	
	if(L->length >= L->listsize)
	{
		base = (ElemType *)realloc(L->elem, (L->listsize+1) * sizeof(ElemType));
		
		L->elem = base;
		L->listsize++;
	}
    //printf("L->length == %d\n ", L->length);

	insertPtr = &(L->elem[i-1]);
	for(p = &(L->elem[L->length - 1]); p >= insertPtr; p--)
	{
	    printf("L->length == %d \n", L->length);
		*(p + 1) = *p;
	}

	*insertPtr = item;
	L->length++;

	return;
}

/**
 *从顺序表中删除元素
 *参数L：Sqlist类型的指针
 *参数i:删除元素的位置
 */
void DelElem(Sqlist *L, int i)
{
	/*从顺序表L中删除第i个元素*/
	ElemType *delItem, *q;

	if(i < 1 || i > L->length)
	{
		exit(0);
	}

	delItem = &(L->elem[i - 1]);
	q = L->elem + L->length - 1;
	for(++delItem; delItem <= q; ++delItem)
	{
		*(delItem - 1) = *delItem;
        printf("delItem == %d \n", *delItem);
	}

	L->elem = (ElemType *)realloc(L->elem, (L->listsize - 1) * sizeof(ElemType ));
	L->length--;
	L->listsize--;

	return;
}

/*测试函数*/
int main(int argc, char *argv[])
{
	Sqlist l;
	int i = 0;

	initSqlist(&l);	/*初始化一个顺序表*/
	
	for(i = 0; i < 15; i++)
	{
		InsertElem(&l, i + 1, i + 1);/*向顺序表中插入1...15*/
	}
	
	printf("\nThe content of the list is\n");
	for(i = 0; i < l.length; i++)
	{
		printf("%d ", l.elem[i]);/*打印出顺序表中的内容*/
	}
	printf("\n");
	DelElem(&l, 5);/*删除第5个元素，即5*/

	printf("\nDelete the fifth element\n");
	for(i = 0; i < l.length; i++)/*打印删除后的结果*/
	{
		printf("%d ", l.elem[i]);
	}
	
	printf("\n");

	return 0;
}

/*

The content of the list is
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
delItem == 6 
delItem == 7 
delItem == 8 
delItem == 9 
delItem == 10 
delItem == 11 
delItem == 12 
delItem == 13 
delItem == 14 
delItem == 15 

Delete the fifth element
1 2 3 4 6 7 8 9 10 11 12 13 14 15 
*/