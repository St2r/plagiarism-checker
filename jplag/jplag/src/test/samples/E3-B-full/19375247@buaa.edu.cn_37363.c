"""
2022-03-28 22:25:52
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 1 ms | 1580 KB

"""

#include<stdio.h>

void get_value(int n)
{
	int sum = 0;
	for(int i = 1;i <= n/2;i++)
	{
		if(n % i == 0) sum += i;
	}
	if(sum == n) printf("YES\n");
	else printf("NO\n");
}

int main()
{
	int n;
	int a[105];
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
		get_value(a[i]);
	}
	return 0;
}