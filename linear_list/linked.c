/*
 * @Author: cpu_code
 * @Date: 2020-05-20 19:59:22
 * @LastEditTime: 2020-06-16 18:11:57
 * @FilePath: \c_course\linear_list\linked.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

/***************************************************
 * 
 * 线性表的链式存储结构的特点：用一组任意的存储单元存储线性表的数据元素，这组存储单元可以存在内存中未被占用的任意位置。
 * 顺序存储结构每个数据元素只需要存储一个位置就可以了，
 * 而 现在 链式存储结构 中，除了要存储数据元素信息外，还要存储它的 后继元素 的存储地址（指针），
 * 也就是说除了存储其本身的信息外，还需存储一个指示其直接后继的存储位置的信息。
 * 把 存储数据元素信息的域 称为数据域，把 存储直接后继位置的域 称为 指针域。
 * 指针域 中存储的信息 称为 指针 或 链。这两部分信息组成数据元素称为 存储映像 ，称为 结点(Node)
 * 链表的每个结点中只包含一个 指针域 ，所以叫做单链表
 * 线性表来说，总得有个头有个尾，链表也不例外。
 * 我们把链表中的 第一个结点 的存储位置叫做 头指针 ，最后一个结点指针为空(NULL)
 * 
 ***************************************************/
#include <stdio.h>

#define OK      1
#define ERROR   0

typedef int ElemType;

/* 用结构指针来描述单链表 */
typedef struct Node
{
    ElemType data;      // 数据域
    struct Node* next;  // 指针域
} Node;

typedef struct Node* LinkList;


int main()
{

    return 0;
}

/* 初始条件：链式线性表 L 已存在，1 <= i <= ListLength(L) */
/* 操作结果：用 e 返回 L 中第 i 个数据元素的值 */
Status GetElem( LinkList L, int i, ElemType *e )
{
    int j;
    LinkList p;

    /* 一个结点p指向链表第一个结点 */
    p = L->next;
    j = 1;

    /* 当j < i时，就遍历链表，让 p 的指针向后移动，不断指向一下结点，j+1 */
    /* 链表末尾p为空，则说明第i个元素不存在 */
    while( p && j < i )
    {
        p = p->next;
        ++j;
    }

    if( !p || j > i )
    {
        return ERROR;
    }

    *e = p->data;

    return OK;
}

/* 初始条件：链式线性表 L 已存在，1 <= i <= ListLength(L) */
/* 操作结果：删除 L 的第 i 个数据元素，并用 e 返回其值，L 的长度 -1 */
Status ListDelete(LinkList *L, int i, ElemType *e)
{
    int j;
    LinkList p, q;

    p = *L;
    j = 1;

    /* 向后循环到 i 位*/
    while( p->next && j < i )
    {
        p = p->next;
        ++j;
    }

    /* p的下指针为空，j > i 为错误 */
    if( !(p->next) || j > i )
    {
        return ERROR;
    }

#if 1
    /* p的后驱 赋给 q */
    q = p->next;
    /* p的后驱 指向 q的后驱 ，q 就缺少了前驱*/
    p->next = q->next;
#else 
    /* 功能同上 */
    /* p的后驱 指向 p的后驱的后驱 */
    p->next = p->next->next;
#endif

    *e = q->data;

    /* 删除 q 点 */
    free(q);

    return OK;
}