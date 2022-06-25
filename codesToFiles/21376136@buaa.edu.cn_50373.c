"""
2022-03-26 09:45:59
AC
1.0
Accepted | 1 * (1 / 10) | 21 ms | 1636 KB
Accepted | 1 * (1 / 10) | 16 ms | 1700 KB
Accepted | 1 * (2 / 10) | 18 ms | 1664 KB
Accepted | 1 * (2 / 10) | 12 ms | 1616 KB
Accepted | 1 * (4 / 10) | 12 ms | 1680 KB

"""

#include<stdio.h>
 unsigned long long jiecheng(int a)
{
	unsigned long long ssss=1;
	if(a==0){
		return 1;
	}
	else
	{
			for(int i=1;i<=a;i++)
			{
				ssss*=i;
			}
			return ssss;
	}
}
int main()
{
	int n;
	double sum=0;
	scanf("%d",&n);
	if(n>17)
	{
		n=17;
	}
	for(int i=0;i<=n;i++)
	{
		sum+=(1.0/(double)jiecheng(i));
	}
	printf("%.14f\n",sum);
}