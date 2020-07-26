/*
 * @Author: cpu_code
 * @Date: 2020-07-25 21:30:50
 * @LastEditTime: 2020-07-25 22:04:30
 * @FilePath: \-c_course\sequence\choice.c
 * @Gitee: https://gitee.com/cpu_code
 * @Github: https://github.com/CPU-Code
 * @CSDN: https://blog.csdn.net/qq_44226094
 * @Gitbook: https://923992029.gitbook.io/cpucode/
 */

/*
“选择法” 
选择法循环过程与冒泡法一致，它还定义了记号k=i
然后依次把a[k]同后面元素比较，若a[k]>a[j],则使k=j.
最后看看k=i是否还成立，不成立则交换a[k],a[i]
这样就比冒泡法省下许多无用的交换，提高了效率。 

选择法比冒泡法效率更高

*/
#include <stdio.h>

void choise(int *a,int n);
void print(int *a, int n);

int main()
{
    int a1[] = {13, 0, 5, 8, 1, 7, 8, 1, 9, 2}; 
    int n = sizeof(a1)/sizeof(a1[0]);

	printf("the original list:\n"); 
	print(a1, n); 
    
    printf("according to choise:\n"); 
	choise(a1, n); 
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

void choise(int *a,int n) 
{ 
	int i, j, min, temp; 

	for(i = 0; i < n-1; i++) 
	{ 
		min = i; 				/*给记号赋值*/ 

		for(j = i+1; j < n; j++) 
		{
			if(a[min] > a[j])
			{
				min = j; 										/*是k总是指向最小元素*/ 
				//printf("最小值 a[%d]=%d   \n", min, a[min]);
			}
		}

		if(i != min) 
		{ 														/*当k!=i是才交换，否则a[i]即为最小*/ 
			//printf(" a[%d]=%d  互换 a[%d]=%d   \n",i, a[i], min, a[min]);

			temp = a[i]; 
			a[i] = a[min]; 
			a[min] = temp; 
		} 
	} 
} 

/*
the original list:
   13    0    5    8    1    7    8    1    9    2
according to choise:
    0    1    1    2    5    7    8    8    9   13
*/