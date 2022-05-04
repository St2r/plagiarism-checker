"""
2022-03-26 09:42:31
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1604 KB
Accepted | 1 * (35 / 100) | 17 ms | 1544 KB
Accepted | 1 * (60 / 100) | 22 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int a[200],b[200]={0},i,j,k,n;
	
	i = 1;

	scanf("%d",&n);
	
	while(i <= n)
	{
		scanf("%d",&a[i]);
	
		i++;
		 
	}
	
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=a[j]-1;i++)
		{
			if(a[j] % i == 0)
			{
			
				b[j] = b[j] + i;
				
			}
			
		}
	}
	
	for(k=1;k<=n;k++)
	{
		if(a[k]==b[k])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
	return 0;
}