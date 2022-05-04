"""
2022-03-29 08:31:57
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int sum,i,j,n;
	int x[102];
	
	scanf("%d",&n);
		
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}

	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j*j<=x[i];j++)
		{
			if(x[i]%j==0)
			{
				sum+=j;
				sum+=(x[i]/j);
			}
		}
		if(sum==2*x[i]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}