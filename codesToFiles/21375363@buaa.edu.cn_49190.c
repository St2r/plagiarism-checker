"""
2022-03-26 11:17:38
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (1 / 10) | 12 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (2 / 10) | 18 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	double sum=0,q=1;
	scanf("%d",&n);
	if(n>=19)
	{
		for(i=1;i<=19;i++)
	{
		q=q*(1.0*1/i);
		sum+=q;
	}
	printf("%.14f",sum+1);
	}
	if(n<19)
	{	for(i=1;i<=n;i++)
	{
		q=q*(1.0*1/i);
		sum+=q;
	}
	printf("%.14f",sum+1);
	}

}