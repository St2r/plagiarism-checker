"""
2022-03-29 23:56:53
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 0 ms | 1732 KB

"""

#include<stdio.h>
int main()
{
	int n, i, j;
	double sum=1.0;
	double w=1.0;
	scanf("%d",&n);
	if(n>20)
	n = 20;
	  
	for(i=1; i<=n; i++)
	{
	for(j=1; j<=i; j++)
	{
		sum=sum*j;
	}
	w=w + 1/(1.0*sum)	;
	sum=1;
    }
	printf("%.14f", w);
	return 0;
}