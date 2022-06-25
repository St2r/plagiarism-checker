"""
2022-03-28 22:32:41
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 0 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1728 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
	int i;
	long long n;
	double sum=1,p=1.0;
	scanf("%lld",&n);
	if(n<=17)
	{
	for(i=1;i<=n;i++)
	{
		p=p/i;
		sum+=p;
	}
}
    if(n>17)
    {
    	for(i=1;i<=17;i++)
	{
		p=p/i;
		sum+=p;
	}
	}
	printf("%.14lf",sum);

	
	return 0;
 }