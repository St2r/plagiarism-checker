"""
2022-03-29 18:14:03
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 2 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	int m,p,sum;
	sum=0;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for(p=1;p<m;p++)
		{
	if(m%p==0)
	sum=sum+p;
	}
		if(m==sum)
		{
		printf("YES\n");
			
		}
		else
		printf("NO\n");
		sum=0;
	}

	return 0;
}