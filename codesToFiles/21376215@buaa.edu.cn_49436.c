"""
2022-03-29 20:42:47
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1720 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include<stdio.h>
int main()
{
int  n,i,p;
double a,sum=1;
scanf("%d",&n);
if(n<=17)
{
	for(i=1;i<=n;i++)
	{
		for(a=p=1;p<=i;p++)
		{
			a=a*p;
		}
	sum=sum+(1/a);
	}
printf("%.14lf",sum);
}
else
 {
 	printf("2.71828182845905");
 }
 return 0;
}