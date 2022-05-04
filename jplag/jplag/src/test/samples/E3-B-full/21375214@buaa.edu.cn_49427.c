"""
2022-03-26 12:45:36
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1636 KB
Accepted | 1 * (35 / 100) | 2 ms | 1640 KB
Accepted | 1 * (60 / 100) | 12 ms | 1648 KB
| 1 * (1 / 4) | 8 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,a,k,sum=0,i=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		
		for(k=1;k<a;k++)
		{
			if(a%k==0)
			{
				sum+=k;
			}
		}
		if(sum==a)
		{
			printf("YES\n");
			sum=0;
		}else
		{
			printf("NO\n");
			sum=0;
		}
	}
	return 0;
}