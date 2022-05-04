"""
2022-03-29 23:53:47
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 1 ms | 1740 KB

"""

#include<stdio.h>
int a[10000];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==6 || a[i]==28 || a[i]==496 || a[i]==8128)
		{
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}