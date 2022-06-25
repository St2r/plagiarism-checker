"""
2022-03-26 13:33:59
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1624 KB
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1628 KB
Accepted | 1 * (1 / 4) | 2 ms | 1664 KB



"""

#include <stdio.h>
#include<math.h>
int main()
{
    long long n,i,b;
    double sum,a[20],c;
	scanf("%lld",&n);
	sum=0;
	c=2.71828182845905;
	if(n<=20)
	{
	for (i=0;i<n;i++)
	{
		a[i]=1;
		for(b=1;b<=i+1;b++)
		{
		a[i]=a[i]/b;
	    }
    sum=sum+a[i];
	}
    printf("%.14lf",sum+1);
    }
    else
    printf("%.14lf",c);

return 0;
}