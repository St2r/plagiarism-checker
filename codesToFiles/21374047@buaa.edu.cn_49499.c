"""
2022-03-28 23:26:17
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int i,n;
	double j=0,k=1.0;
	long long sum=1;
	scanf("%d",&n);
	if(n<20)
	{
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
		j=1.0/sum;
		k=k+j;
	}
    }
    else
	{
		for(i=1;i<=20;i++)
	{
		sum=sum*i;
		j=1.0/sum;
		k=k+j;
	}
	}
	printf("%.14f",k);
	return 0;
}