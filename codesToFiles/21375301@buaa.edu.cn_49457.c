"""
2022-03-28 18:06:19
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
#define min 1e-14
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	double sum =1.0;
	double s,a=1.0;
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			a*=j;
		}
		s=1.0/a;
		sum +=s;
		a=1.0;
		if(s<min) break;
	}
	printf("%.14lf",sum);
	
	
	return 0;
}