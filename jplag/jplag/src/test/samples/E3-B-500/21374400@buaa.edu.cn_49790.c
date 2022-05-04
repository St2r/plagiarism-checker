"""
2022-03-26 20:22:24
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB
Accepted | 1 * (1 / 4) | 4 ms | 1660 KB
Accepted | 1 * (1 / 4) | 3 ms | 1664 KB
Accepted | 1 * (1 / 4) | 3 ms | 1620 KB

"""

#include<stdio.h>
int main()
{
	int n,i,q;
	int a[100];
	int sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&a[i]);
		for(q=1;q<a[i];q++)
		{
			if(a[i]%q==0)
			{
				sum+=q;
			}
		}
		if(sum==a[i])
			{
				printf("YES\n");
			}else
			{
				printf("NO\n");	
			}
	}
	return 0;
	
}