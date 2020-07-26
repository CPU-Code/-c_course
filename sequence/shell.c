/*
 * @Author: cpu_code
 * @Date: 2020-07-26 16:14:05
 * @LastEditTime: 2020-07-26 16:16:31
 * @FilePath: \-c_course\sequence\shell.c
 * @Gitee: https://gitee.com/cpu_code
 * @Github: https://github.com/CPU-Code
 * @CSDN: https://blog.csdn.net/qq_44226094
 * @Gitbook: https://923992029.gitbook.io/cpucode/
 */ 

/*
“shell法” 
shell法是一个叫 shell 的美国人与1969年发明的。
它首先把相距k(k>=1)的那几个元素排好序，再缩小k值（一般取其一半），再排序，直到k=1时完成排序。

*/

#include <stdio.h>

void shell(int *a, int n) ;
void print(int *a, int n);

int main()
{
    int a1[] = {13, 0, 5, 8, 1, 7, 8, 1, 9, 2}; 
    int n = sizeof(a1)/sizeof(a1[0]);

	printf("the original list:\n"); 
	print(a1, n); 
    
    printf("according to choise:\n"); 
	shell(a1, n); 

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

void shell(int *a, int n) 
{ 
	int i, j, k, x; 

	k = n/2; 		/*间距值*/ 

	while(k >= 1) 
	{ 
		for(i = k; i < n; i++) 
		{ 
			x = a[i]; 
			j = i-k; 

			while(j >= 0 && x < a[j]) 
			{ 
				a[j + k] = a[j]; 
				j -= k; 
			} 
            
			a[j + k] = x; 
		} 

		k /= 2; 				/*缩小间距值*/ 
	} 
} 