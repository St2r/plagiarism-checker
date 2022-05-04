"""
2022-03-29 20:13:39
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 3 ms | 1732 KB

"""

#include <stdio.h>
int main()
{
	int n,a[100],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		int m=0;
		for(j=1;j<a[i];j++)
		{
			if(0==a[i]%j)
			{
					m=m+j;
			}
		
		}
		if(m==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
	
}