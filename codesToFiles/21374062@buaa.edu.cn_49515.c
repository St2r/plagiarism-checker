"""
2022-03-26 17:49:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (4 / 10) | 2 ms | 1676 KB

"""

#include<stdio.h>
int main()
{
	int n;
        long long sum=1;
	double p=1;
	scanf("%d",&n);
	if(n<20)
    {
	   for(int i=1;i<=n;i++)
	   {
		sum=sum*i;
		p=p+1.0/sum;
	   }
    }
	if(n>=20)
	{
		for(int j=1;j<=20;j++)
		{
			sum=sum*j;
		    p=p+1.0/sum;
		}
	}
	printf("%.14f",p);
	return 0;
}