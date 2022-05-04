"""
2022-03-26 16:47:15
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1560 KB
Accepted | 1 * (35 / 100) | 3 ms | 1656 KB
Accepted | 1 * (60 / 100) | 8 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	int a[100];
	int b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		b=0;
		scanf("%d",&a[i]);
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				b=b+j;
			}
		}
		if(b==a[i])
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