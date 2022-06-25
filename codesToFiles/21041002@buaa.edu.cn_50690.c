"""
2022-03-27 10:56:19
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1652 KB
Accepted | 1 * (1 / 4) | 7 ms | 1656 KB
Accepted | 1 * (1 / 4) | 2 ms | 1652 KB
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	double a=1,b=1;
	int n,i,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  for(m=1;m<=i;m++)	
	{
		b=b/m;
	}
	a=a+b;
	b=1;
	}
	printf("%.14f",a);
	return 0;
}