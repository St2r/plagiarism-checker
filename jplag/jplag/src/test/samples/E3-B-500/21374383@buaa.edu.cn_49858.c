"""
2022-03-26 15:56:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1664 KB
Accepted | 1 * (35 / 100) | 2 ms | 1620 KB
Accepted | 1 * (60 / 100) | 2 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int n,a,i,j,k;
	int sum=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		if(a==6||a==28||a==496||a==8128)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}