"""
2022-03-26 13:23:18
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1660 KB
Accepted | 1 * (35 / 100) | 9 ms | 1660 KB
Accepted | 1 * (60 / 100) | 11 ms | 1704 KB

"""

#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n, i, * a,j;
	int temp;
	scanf("%d", &n);
	a = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		temp = 0;
		for (j = 1; j < a[i]; j++)
		{
			if ((a[i] % j)==0)
			{
				temp += j;
			}
		}
		if (temp == a[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}