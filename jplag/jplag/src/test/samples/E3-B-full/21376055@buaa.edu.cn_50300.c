"""
2022-03-26 11:33:12
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1616 KB
Accepted | 1 * (35 / 100) | 11 ms | 1528 KB
Accepted | 1 * (60 / 100) | 14 ms | 1620 KB

"""

#include<stdio.h>
int main ()
{
	int n;
	scanf ("%d",&n);
	int a[100];
	for (int i=0;i<n;i++)
	{
		scanf ("%d", &a[i]);
		if (a[i]==6||a[i]==28||a[i]==496||a[i]==8128)
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}