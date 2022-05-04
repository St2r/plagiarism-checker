"""
2022-03-26 10:52:33
AC
1.0
Accepted | 1 * (1 / 4) | 16 ms | 1640 KB
Accepted | 1 * (1 / 4) | 15 ms | 1644 KB
Accepted | 1 * (1 / 4) | 13 ms | 1640 KB
Accepted | 1 * (1 / 4) | 20 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int n,i,a[10000],b,c,sum=1;
	scanf("%d",&n);
	if(n==1)
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==1)
		{
			printf("No");
		}
		else
		{
		for(b=1;b<a[i];b++)
		{
			for(c=b;c<=a[i];c++)
			{
				if(a[i]==b*c&&c!=a[i])
				{
					sum=sum+b+c;
				}
			}
		}
		if(sum==a[i])
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
		}
		
	}
	 
	return 0;
}