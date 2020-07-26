/*
 * @Author: cpu_code
 * @Date: 2020-07-25 20:43:57
 * @LastEditTime: 2020-07-25 21:33:22
 * @FilePath: \-c_course\sequence\bubbling.c
 * @Gitee: https://gitee.com/cpu_code
 * @Github: https://github.com/CPU-Code
 * @CSDN: https://blog.csdn.net/qq_44226094
 * @Gitbook: https://923992029.gitbook.io/cpucode/
 */ 
/*
“冒泡法” 
冒泡法大家都较熟悉。其原理为从a[0]开始，依次将其和后面的元素比较,
若a[0]>a[i]，则交换它们，一直比较到a[n]。
同理对a[1],a[2],...a[n-1]处理，即完成排序。 

冒泡法原理简单，但其缺点是交换次数多，效率低。 

规律:
一步一步从低位置排到高位置 , 值由小到大
*/
#include <stdio.h>

void print(int *a, int n);
void bubble(int *a,int n);

int main()
{
    int a1[] = {13, 0, 5, 8, 1, 7, 8, 1, 9, 2}; 
    int n = sizeof(a1)/sizeof(a1[0]);

	printf("the original list:\n"); 
	print(a1, n); 
    
	printf("according to bubble:\n"); 
	bubble(a1, n); 

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

void bubble(int *a,int n) 	/*定义两个参数：数组首地址与数组大小*/ 
{ 
	int i, j, temp;

	for(i = 0; i< n - 1; i++) 
    {
		for(j = i+1; j < n; j++) 			/*注意循环的上下限*/ 
        {
			//printf(" a[%d]=%d  比较 a[%d]=%d   \n",i, a[i], j, a[j]);
			if(a[i] > a[j]) 
			{ 
				printf("\n a[%d]=%d  互换 a[%d]=%d   \n",i, a[i], j, a[j]);

				temp = a[i]; 
				a[i] = a[j]; 
				a[j] = temp; 
			}
			//printf("a [%d] == %d ", j, a[j]);
        }
		printf("\n"); 
		//printf("排好的 a [%d] == %d ", i, a[i]);
		//printf("\n"); 
    }
} 

/*
the original list:
   13    0    5    8    1    7    8    1    9    2
according to bubble:
    0    1    1    2    5    7    8    8    9   13
*/