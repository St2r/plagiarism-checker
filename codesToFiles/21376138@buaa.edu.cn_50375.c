"""
2022-03-26 19:26:46
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	long long n;
	double sum=1;
	scanf("%lld",&n);
	for(int k=1;k<=n;k++)
	{
		long long n_jie=1;
		for(int i=1;i<=k;i++)
	  {
		  n_jie*=1.0*i;
	  }
	    sum+=(1.0/n_jie);
	    if(2.718281828459045-sum<1E-16)break;
	}
	printf("%.14lf",sum);
	return 0;
}