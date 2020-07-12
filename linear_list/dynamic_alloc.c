/*
 * @Author: cpu_code
 * @Date: 2020-06-24 21:15:16
 * @LastEditTime: 2020-06-24 21:20:32
 * @FilePath: \c_course\linear_list\dynami_alloc.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include<stdio.h>
#include<stdlib.h>

//线性表（动态分配空间)
#define MAXSIZE		2

int main(void)
{
	int *a = NULL, i = 0, j = 0;

	//申请内存
	a = (int*)malloc(MAXSIZE * sizeof(int));
	//判断是否申请失败
	if(NULL == a)
	{
		return 0;
	}

	while(1)
	{
		if(i >= MAXSIZE)
		{
			//重新分配内存空间
			a = (int*)realloc(a, (i + 1)*sizeof(int));
            printf("run realloc\n");
		}
		
		printf("please input a int data, press 0 to exit\n");
		//输入数字后,i才会加加
		scanf("%d", &(a[i++]));
		//缓冲回车
		getchar();
		
		//判断 上一个i的值是否为0
		if(a[i-1] == 0)
		{
			break;
		}
	}

	for(j = 0; j < i; j++)
	{
		printf("%d\t", a[j]);
	}
	printf("\n");
	
	//释放内存
	free(a);

	return 0;
}

/*
please input a int data, press 0 to exit
11
please input a int data, press 0 to exit
52
run realloc
please input a int data, press 0 to exit
44
run realloc
please input a int data, press 0 to exit
0
11	52	44	0	
*/