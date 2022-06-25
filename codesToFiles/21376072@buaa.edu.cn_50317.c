"""
2022-03-29 20:08:44
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1740 KB

"""

#include<stdio.h>
int main()
{
	int i,n;
	double r;
	double sum=0;
	scanf("%d",&n);

if(n<=18)	
for(i=r=1;i<=n;i++)
	{
		 r/=i;
		sum+=r;
	}

else{

for(i=r=1;i<=18;i++)
	{
		 r/=i;
	
		sum+=r;
	}}

		printf("%.14lf",sum+1);
	return 0;
}