"""
2022-03-26 15:13:55
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1552 KB
Accepted | 1 * (2 / 10) | 3 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include <stdio.h>
#include<math.h>
int main()
{
	int n;
	
	scanf("%d",&n);
	double sum1=1,sum=0,d=0,s=0;
if(n<=10000)
{


	for(int i=1;i<=n;i++)
	{
		sum1=sum1*i;
		sum=1.0/sum1;
		d=d+sum;
	}	
	s=1.0+d;
	printf("%.14lf",s);
}
else
{
	printf("2.71828182845905");
	 } 	
	
	return 0;
 }