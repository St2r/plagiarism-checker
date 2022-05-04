"""
2022-03-26 19:49:28
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 2 ms | 1556 KB

"""

#include<stdio.h>
int main()
{
	int a,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a==6||a==28||a==496||a==8128)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}