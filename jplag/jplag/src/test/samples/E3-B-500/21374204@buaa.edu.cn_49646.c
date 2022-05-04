"""
2022-03-26 08:09:03
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1676 KB
Accepted | 1 * (35 / 100) | 3 ms | 1660 KB
Accepted | 1 * (60 / 100) | 4 ms | 1612 KB

"""

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n,a[2000],sum;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		sum=0;
		for(int j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
				sum+=j;	
		}
		if(sum==a[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
    return 0;
}