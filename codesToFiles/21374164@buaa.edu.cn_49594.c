"""
2022-03-26 23:41:42
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include <stdio.h>

int main()
{
	int n,j,i;
	double ans=1,sum=1;
	scanf("%d",&n);
	if(n>=17)
	n=17;
	for(j=1;j<=n;j++)
	{
		sum=1;
		for(i=1;i<=j;i++)
		{
			sum=sum*i;
		 } 
		 ans=ans+(double)(1.0/sum);
	}
	printf("%.14f",ans);
	return 0;
}