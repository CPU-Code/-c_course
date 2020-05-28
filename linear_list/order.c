/*
 * @Author: cpu_code
 * @Date: 2020-05-20 18:27:56
 * @LastEditTime: 2020-05-20 21:56:11
 * @FilePath: \c_course\linear_list\order.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>


/* 数组的长度MaxSize */
#define MAXSIZE 20
#define OK      1
#define ERROR   0
#define TRUE    1
#define FALSE   0

typedef int ElemType;

// Status 是函数的类型，其值是函数结果状态代码，如OK等
typedef int Status;

typedef struct
{
    ElemType data[MAXSIZE];
    int length;    // 线性表当前长度
} SqList;

/*******************************************************
 * 
 * 线性表的顺序存储结构，在存、读数据时，不管是哪个位置，时间复杂度都是O(1)。而在插入或删除时，时间复杂度都是O(n)
 * 它比较适合元素个数比较稳定，不经常插入和删除元素，而更多的操作是存取数据的应用
 * 优点：
 *      无须为表示表中元素之间的逻辑关系而增加额外的存储空间
 *      可以快速地存取表中任意位置的元素
 * 缺点：
 *      插入和删除操作需要移动大量元素
 *      当线性表长度变化较大时，难以确定存储空间的容量
 *      容易造成存储空间的“碎片”
 * 
 ******************************************************/

void unionL(SqList *La, SqList Lb);
Status LocateElem(SqList L, int e);
int ListLength(SqList L);
Status GetElem(SqList L, int i, ElemType *e);
Status ListInsert(SqList *L, int i, ElemType e);
Status ListDelete(SqList *L, int i, ElemType *e);

/*  */
int main()
{
    int i;
    SqList La;
    SqList Lb;

    La.data[0] = 12;
	La.data[1] = 32;
	La.data[2] = 43;
	La.length = 3;

    Lb.data[0] = 12;
	Lb.data[1] = 32;
	Lb.data[2] = 34;
    Lb.length = 3;

    unionL(&La, Lb);
    for(i = 0; i < La.length; i++)
    {
        printf("La.data[%d] = %d\r\n", i, La.data[i]);
    }
	printf("\n");
    for(i = 0; i < Lb.length; i++)
    {
        printf("Lb.data[%d] = %d\r\n", i, Lb.data[i]);
    }

    return 0;
}

// La表示A集合，Lb表示B集合
/* ADT 线性表（List） */
void unionL(SqList *La, SqList Lb)
{
    int La_len, Lb_len;
    int i;

    /**
     *除第一个元素外，每一个元素有且只有一个直接前驱元素，
     *除了最后一个元素外，每一个元素有且只有一个直接后继元素
     *数据元素之间的关系是一对一的关系 
     */
    /* 线性表的数据对象集合,每个元素的类型均为DataType */
    ElemType e;

    /* 返回线性表L的元素个数 */
     La_len = ListLength(*La);
     Lb_len = ListLength(Lb);

    /* 循环遍历 集合B 中的每个元素，判断当前元素是否存在 A 中，若不存在，则插入 A 中即可 */
     for( i = 1; i <= Lb_len; i++ )
     {
        /*将线性表 Lb 中的第 i 个位置元素值返回给 e */
        GetElem(Lb, i, &e);
        
        /**
         * @function: 在线性表 La 中查找与给定值 e 相等的元素
         * @parameter: 
         * @return: 
         *     success: 该元素在表中序号
         *     error: 0
         * @note: 
         */
        if( !LocateElem(*La, e) )
        {
            //在线性表 La 中第 ++La_len 个位置插入新元素 e
            ListInsert(La, La_len - 1, e);
        }
     }
}


Status LocateElem(SqList L, int e)
{
    int i;
    
    for(i = 1; i <= L.length; i++)
    {
        if(L.data[i - 1] == e)
        {
            return i;
        }
    }
    return 0;
}

/* 返回长度 */
int ListLength(SqList L)
{
    if(L.length == 0 || L.length > MAXSIZE)
    {
        return ERROR;
    }
    return L.length;
}

// 初始条件：顺序线性表 L 已存在，1 <= i <= ListLength(L)
// 操作结果：用 e 返回 L 中第 i 个数据元素的值
//将线性表 L 中的第 i 个位置元素值返回
Status GetElem(SqList L, int i, ElemType *e)
{
    if( L.length == 0 || i < 1 || i > L.length )
    {
        return ERROR;
    }
    *e = L.data[i-1];

    return OK;
}

/* 初始条件：顺序线性表 L 已存在，1 <= i <= ListLength(L) */
/* 操作结果：在 L 中第 i 个位置之前插入新的数据元素 e，L 长度 + 1 */
Status ListInsert(SqList *L, int i, ElemType e)
{
    int k;

    if( L->length >= MAXSIZE )  // 顺序线性表已经满了
    {
        return ERROR;
    }
    if( i < 1 || i > L->length + 1 )   // 当i不在范围内时
    {
        return ERROR;
    }
    if( i <= L->length )   // 若插入数据位置不在表尾
    {
        /* 将要插入位置后数据元素向后移动一位 */
        /* 将要插入的位置空出来 */
        for( k = L->length - 1; k >= i-1; k-- )
        {
            L->data[k + 1] = L->data[k];
			printf(" L->data[%d] = %d\r\n", k, L->data[k]);
        }
    }

    L->data[i-1] = e;  // 将新元素插入
    L->length++;

    return OK;
}

/* 初始条件：顺序线性表 L 已存在，1 <= i <= ListLength(L) */
/* 操作结果：删除 L 的第 i 个数据元素，并用 e 返回其值，L 的长度 -1 */
Status ListDelete(SqList *L, int i, ElemType *e)
{
    int k;

    if( L->length == 0 )
    {
        return ERROR;
    }
    if( i < 1 || i > L->length )
    {
        return ERROR;
    }

    *e = L->data[i-1];

    if( i < L->length )
    {
        /* 将 i 个元素覆盖 */
        for( k = i; k < L->length; k++ )
        {
            L->data[k-1] = L->data[k];
        }
    }

    L->length--;

    return OK;
}