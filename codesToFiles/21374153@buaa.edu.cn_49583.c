"""
2022-03-28 19:35:29
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 0 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (4 / 10) | 0 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double m;
	int i,j;
	double k,l;
	l=0;
	if(n>16)
	n=17;
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=i;j++)
		{
			k=k*j;
		}
		l=l+1/k;
	}
	m=1+l;
	printf("%.14f",m);
	return 0;
}