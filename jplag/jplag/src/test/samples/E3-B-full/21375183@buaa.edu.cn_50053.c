"""
2022-03-26 14:48:19
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 2 ms | 1552 KB

"""

#include<stdio.h>
int main()
{
	int n, x[105];
	scanf("%d", &n);
	for(int k=0;k<=n-1;k++)
	{
		scanf("%d", &x[k]);
		
	}
	for(int i=0;i<=n-1;i++)
	{
		if(x[i]==6||x[i]==28||x[i]==496||x[i]==8128)
		printf("YES\n");
		else
		printf("NO\n");		
	}
	
}