"""
2022-03-29 20:53:50
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1572 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 2 ms | 1680 KB

"""

# include <stdio.h>

int main()
{
	int n;
    int i,j;
	int x[100];
	int sum[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum[i]=0;
	    for(j=1;j<x[i];j++)
	    {
		    if(x[i]%j==0)
		    sum[i]=sum[i]+j;
		    
	    }
    }
	for(i=1;i<=n;i++)
	{
		if(sum[i]==x[i])
		    printf("YES\n");
		    else
		    printf("NO\n");
	}
	return 0;
}