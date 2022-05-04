"""
2022-03-28 22:45:27
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	//printf("%d\n", n);
	int i=0,j,p,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		for(j=0;j<p;j++)
		{
			if(p%(j+1)==0&&j+1!=p)
			sum=sum+(j+1);
		}
		if(sum==p)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}}