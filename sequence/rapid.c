/*
 * @Author: cpu_code
 * @Date: 2020-07-25 21:44:49
 * @LastEditTime: 2020-07-26 15:56:13
 * @FilePath: \-c_course\sequence\rapid.c
 * @Gitee: https://gitee.com/cpu_code
 * @Github: https://github.com/CPU-Code
 * @CSDN: https://blog.csdn.net/qq_44226094
 * @Gitbook: https://923992029.gitbook.io/cpucode/
 */ 
/* 
“快速法” 
快速法定义了三个参数,（数组首地址*a,要排序数组起始元素下标i,要排序数组结束元素下标j).
它首先选一个数组元素（一般为a[ (i+j)/2 ],即中间元素）作为参照,把比它小的元素放到它的左边，比它大的放在右边。
然后运用递归，在将它左，右两个子数组排序，最后完成整个数组的排序。


*/

#include <stdio.h>

void quick(int *a,int i,int j);
void print(int *a, int n);

int main()
{
    int a1[] = {13, 0, 5, 8, 1, 7, 8, 1, 9, 2}; 
    int n = sizeof(a1)/sizeof(a1[0]);

	printf("the original list:\n"); 
	print(a1, n); 
    
    printf("according to choise:\n"); 
	quick(a1, 0, n - 1); 

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

void quick(int *a,int i,int j) 
{ 
	int m, n, temp; 
	int k; 

	m = i; 
	n = j; 
	k = a[(i + j) / 2]; /*选取的参照*/ 

	printf("\n被调用 \n m == %d n == %d k == %d\n" , m , n , k);

	do 
	{ 
		printf("\n 循环 \n");

		while(  a[m] < k && m < j  ) 
		{
			printf(" a[%d]=%d 小于 %d \n",m, a[m], k);
			m++; 											/* 从左到右找比k大的元素*/ 
			
		}
		printf("\n");

		while( a[n] > k && n > i ) 
		{
			printf(" a[%d]=%d 大于 %d \n",n, a[n], k);
		    n--; 											/* 从右到左找比k小的元素*/ 
			
		}

		if(m <= n) 
		{ 			
			/*若找到且满足条件，则交换*/ 
			printf(" a[%d]=%d  互换 a[%d]=%d   \n",m, a[m], n, a[n]);

			temp = a[m];
			a[m] = a[n];
			a[n] = temp;

			m++;
			n--;
		}
		printf("\n m == %d , n == %d\n", m , n);
	}while(m <= n); 

	print(a, 10);

	if(m < j)
    {
		quick(a, m, j);		/*运用递归*/ 
    }
		
	if(n > i) 
    {
		printf("\n n=%d > i=%d\n", n , i);
		quick(a, i, n);
    }

} 