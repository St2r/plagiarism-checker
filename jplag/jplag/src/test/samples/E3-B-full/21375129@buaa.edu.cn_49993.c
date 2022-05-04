"""
2022-03-26 15:29:00
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 3 ms | 1624 KB
Accepted | 1 * (60 / 100) | 4 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
	int n,a[105],i,j,sum[1005]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	i=1;
	while(i<=n)
	{
			for(j=1;j<a[i];j++)
		{
			if((a[i]%j)==0)
			sum[i]+=j;
		}
		i++;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==sum[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}