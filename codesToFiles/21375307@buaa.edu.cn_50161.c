"""
2022-03-29 19:44:11
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1600 KB

"""

#include <stdio.h>
int main()
{
	int n,a,b,j,i;
	double s[100];
	double sum=1;
	scanf("%d",&n);
	if(n<20)
	{
	for(i=0;i<n;i++)
	{
		s[i]=1;
		for(j=1;j<=i+1;j++)
		{
			s[i]*=j;
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+1.0*1/s[i];
	}
	printf("%.14lf",sum);
}
else
printf("2.71828182845905");
	return 0;
}