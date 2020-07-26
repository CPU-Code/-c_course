/*
 * @Author: cpu_code
 * @Date: 2020-07-26 16:48:47
 * @LastEditTime: 2020-07-26 16:49:28
 * @FilePath: \-c_course\sequence\unordered_array.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @Github: https://github.com/CPU-Code
 * @CSDN: https://blog.csdn.net/qq_44226094
 * @Gitbook: https://923992029.gitbook.io/cpucode/
 */ 

/*
有1,2,....一直到n的无序数组,求排序算法,并且要求时间复杂度为O(n),
空间复杂度O(1),使用交换,而且一次只能交换两个数.（华为）
*/

#include <iostream>

int main()
{
    int a[]  = {10, 6, 9, 5, 2, 8, 4, 7, 1, 3};
    int len = sizeof(a) / sizeof(int);
    int temp;
	
    for(int i = 0; i < len; )
    {
		std::cout << "a["<< i << "] == "<< a[i] << " 交换 "
                  << " a[" << a[i]-1 << "] == " << a[a[i] - 1] << std::endl;

		temp = a[a[i] - 1];
		a[a[i] - 1] = a[i];
		a[i] = temp;

		if ( a[i] == i + 1)
		{
			std::cout << a[i] << std::endl << std::endl;

			i++;
		}
		
    }
	
    for (int j = 0; j < len; j++)
	{
		std::cout << a[j] << ",";
	}  
  
	std::cout << std::endl;

    return 0;
}
