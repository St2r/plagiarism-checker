"""
2022-03-28 22:05:22
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 0 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
	long long int n,pro=1;//n为输入的正整数；pro为i的阶乘 
	int k,i,j; //k为截至判别项，最大为16；i用于累加；j用于累乘求阶乘 
	double e=1,dpro; //e为结果、输出对象；dpro为pro的倒数，最小数量级为小数点后14位 
	scanf("%lld",&n);
	if(n>17) k=17;
	else k=n;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			pro*=j;
		}
		dpro=1.0/pro;
		e+=dpro;
		pro=1;
	}
	printf("%.14lf",e); 
	
	return 0;
}