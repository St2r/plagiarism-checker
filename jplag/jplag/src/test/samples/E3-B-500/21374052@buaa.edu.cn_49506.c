"""
2022-03-27 18:36:41
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 3 ms | 1600 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int n,i,k,sum=0,a[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=0;
		for(k=1;k<(a[i]/2+1);k++)
		{
			if(a[i]%k==0)
			{
				sum+=k;
			}
		
			
		}
		if(sum==a[i])
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}