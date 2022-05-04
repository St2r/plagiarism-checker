"""
2022-03-27 21:36:54
PE
0.0
Presentation Error | 0 * (5 / 100) | 2 ms | 1660 KB
Presentation Error | 0 * (35 / 100) | 2 ms | 1660 KB
Presentation Error | 0 * (60 / 100) | 4 ms | 1624 KB

"""

#include <stdio.h>

int main ()
{
	int n;
	int a[1005];
	int i,j;
	int sum;
	sum=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum=0;
		for (j=1;j<a[i];j++)
		{
			if (a[i]%j==0)
			   sum+=j;
		}
		if (sum==a[i])
		   printf("Yes\n");
		else
		   printf("No\n");
	}
	return 0;
}