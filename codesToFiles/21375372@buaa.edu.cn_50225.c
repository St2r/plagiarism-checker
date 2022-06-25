"""
2022-03-28 18:18:26
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 3 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	double sum=0,q=1;
	scanf("%d",&n);
	if(n>=18)
	{
		for(i=1;i<=18;i++)
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