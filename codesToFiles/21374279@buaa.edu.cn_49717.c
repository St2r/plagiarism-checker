"""
2022-03-28 00:04:06
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1616 KB
Accepted | 1 * (1 / 10) | 3 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (4 / 10) | 2 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	int i,n,m;
	double k=1,s=1;
	scanf("%d",&n);
	for(m=1;m<=n;m++)
	{
		k=1;
		for(i=1;i<=m;i++)
		{
			k=k/i;
			if(k<0.000000000000001)
			{
				printf("%.14lf",s);
				return 0;
			}
		}
		s=s+k;
	}
		printf("%.14lf",s);

	return 0;
}