"""
2022-03-26 08:32:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1664 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 12 ms | 1552 KB


"""

#include<stdio.h>
int main()
{
	int n,x;
	int a[55]={0};
	int i = 0,k=0,j=0,sum=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		for (k = 1; k < x-1; k++)
		{
			if (x % k == 0)
				a[k] = k;
		}
		for (j = 1; j < k; j++)
		{
			sum = sum + a[j];
		}
		if (sum == x)
			printf("Yes\n");
		else
			printf("N0\n");
	}
	return 0;
}