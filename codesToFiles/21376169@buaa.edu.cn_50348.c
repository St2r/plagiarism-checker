"""
2022-03-27 16:54:05
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 2 ms | 1552 KB

"""

#include<stdio.h>
int main(){
	int n,k,m;
	double a=1,sum=1;
	scanf("%d",&n);
	if(n<=16)
	{
	for(k=1;k<=n;k++)
	{
		for(m=1;m<=k;m++)
		{
			a=1.0*a/m;
		}
	sum=sum+a;
	a=1;
	}
	printf("%.14lf",sum);
     }
	else
	printf("2.71828182845905");
	
	return 0;
}