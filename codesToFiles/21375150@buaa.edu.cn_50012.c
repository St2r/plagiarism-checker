"""
2022-03-29 20:41:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include<stdio.h>
long long int n,i,m,k;
double e=1.0;

int main()
{
	scanf("%lld",&n);
	
	if(n>=0&&n<=20)
	   k=n;
	else if(n>20)
	   k=20;
	for(i=m=1;i<=k;i++)
	{
		m=m*i;
		e=e+1/(double)m;
	}
	
	printf("%.14f",e);

	return 0;
}