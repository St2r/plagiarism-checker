"""
2022-03-27 14:38:40
AC
1.0
Accepted | 1.0 * (3 / 15) | 2 ms | 1708 KB
Accepted | 1.0 * (2 / 15) | 3 ms | 1620 KB
Accepted | 1.0 * (4 / 15) | 3 ms | 1616 KB
Accepted | 1.0 * (1 / 15) | 3 ms | 1640 KB
Accepted | 1.0 * (5 / 15) | 2 ms | 1724 KB

B

"""

#include<stdio.h>

int main()
{
	double sum=1;
	long long n,tep=1;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		tep*=i;
		sum+=1.0/tep;
		
	}
	if(tep<=1e14)
	printf("%.14f",sum);
	return 0;
}