"""
2022-03-28 18:29:58
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1696 KB
Accepted | 1 * (60 / 100) | 9 ms | 1544 KB

"""

#include<stdio.h>
int n,x[110],ans;
int main()
{
	int i,j;
	scanf("%d",&n);
	for( i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
		ans=0;
		for(j=1;j<x[i];j++)
		{
		if(x[i]%j==0)
		ans+=j;
		}
		if(ans==x[i])
		printf("YES\n");
		else 
		printf("NO\n");
		
	}
	return 0;
}