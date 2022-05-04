"""
2022-03-29 21:25:21
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 2 ms | 1692 KB

"""

#include<stdio.h>
int main()
	{
		int n,a[110]={0},sum=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int m=1;m<=n;m++)
		{	
			for(int j=1;j<a[m];j++)
			{
				if(a[m]%j==0)
				{
					sum=sum+j;
				}
				
			}
		if(sum==a[m])
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
		sum=0;
		
		}
		return 0;
 	}