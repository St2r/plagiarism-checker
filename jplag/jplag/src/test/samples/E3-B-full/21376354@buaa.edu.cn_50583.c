"""
2022-03-28 19:04:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1552 KB
Accepted | 1 * (60 / 100) | 3 ms | 1552 KB

"""

#include <stdio.h>
#define N 110
int main()
{
	int n, a[N], i, j;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		int s=0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				s+=j;
			}
		}
		if(s==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}