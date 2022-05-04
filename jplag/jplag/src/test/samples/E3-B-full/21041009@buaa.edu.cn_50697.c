"""
2022-03-27 00:04:16
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1616 KB
Accepted | 1 * (60 / 100) | 4 ms | 1616 KB

"""

#include<stdio.h>

int main()
{
	int n,a[105],i,o,k,c=1,b[105],sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(o=1;o<=n;o++)
	{
		for(k=2;k<=a[o];k++)
		{
			if(a[o]%k==0)
			{
				b[c]=a[o]/k;
				sum+=b[c];
				c++;
			}
		}
		if(sum==a[o])
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