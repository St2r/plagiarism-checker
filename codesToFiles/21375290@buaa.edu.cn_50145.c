"""
2022-03-26 17:20:11
AC
1.0
Accepted | 1 * (1 / 3) | 18 ms | 1712 KB
Accepted | 1 * (1 / 3) | 12 ms | 1624 KB
Accepted | 1 * (1 / 3) | 3 ms | 1620 KB

"""

#include<stdio.h>
int main()
{
	long long n,i,j=1;
	double sum=1;
	scanf("%lld",&n);
	if(n>=50)
	n=50; 
	for(i=1;i<=n;i++)
	{
		j=j*i;
		sum=(double)(1.0/j)+sum;
	}
	
	printf("%.14f",sum);
	
	return 0;
}