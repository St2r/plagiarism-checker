"""
2022-03-26 18:30:19
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1616 KB
Accepted | 1 * (35 / 100) | 3 ms | 1676 KB
Accepted | 1 * (60 / 100) | 4 ms | 1608 KB

"""

#include <stdio.h>

int main()
{
	int n,i,sum=0,div,a[100],sq;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i-1]);
	}
	
	for(i=1;i<=n;i++)
	{
		for(div=1;div<=(a[i-1]-1);div++)
		{
			if(a[i-1]%div==0)
			{
				sum+=div;
			}
		}
		if(sum==a[i-1])
		{
			printf("YES");
		}else{
			printf("NO");
		}
		if(i!=n)
		{
			printf("\n");
		}
		sum=0;
	}
	
	return 0;
}