/*
 * @Author: cpu_code
 * @Date: 2020-07-26 15:56:59
 * @LastEditTime: 2020-07-26 16:14:36
 * @FilePath: \-c_course\sequence\insert.c
 * @Gitee: https://gitee.com/cpu_code
 * @Github: https://github.com/CPU-Code
 * @CSDN: https://blog.csdn.net/qq_44226094
 * @Gitbook: https://923992029.gitbook.io/cpucode/
 */ 

/*
“插入法” 
插入法是一种比较直观的排序方法。
它首先把数组头两个元素排好序，再依次把后面的元素插入适当的位置。
把数组元素插完也就完成了排序。 
*/

#include <stdio.h>

void insert(int *a,int n) ;
void print(int *a, int n);

int main()
{
    int a1[] = {13, 0, 5, 8, 1, 7, 8, 1, 9, 2}; 
    int n = sizeof(a1)/sizeof(a1[0]);

	printf("the original list:\n"); 
	print(a1, n); 
    
    printf("according to choise:\n"); 
	insert(a1, n); 

	print(a1, n); 

    return 0;
}

/*为了打印方便，我们写一个print吧。*/ 
void print(int *a, int n) 
{ 
	int i; 

	for(i = 0; i < n; i++) 
    {
	    printf("%5d", a[i]); 
    }
    
	printf("\n"); 
} 

void insert(int *a,int n) 
{ 
	int i, j, temp; 

	for(i = 1; i < n; i++) 
	{ 
		temp = a[i]; 	/*temp为要插入的元素*/

		j = i - 1; 
		
		while( j >= 0 && temp < a[j] ) 
		{ 											
			/*从a[i-1]开始找比a[i]小的数，同时把数组元素向后移*/ 
			a[j + 1] = a[j]; 
			
			j--; 
		} 

		a[j + 1] = temp; /*插入*/ 
	} 
} 