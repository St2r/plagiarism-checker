"""
2022-03-30 16:01:04
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1628 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 0 ms | 1736 KB

"""

#include<stdio.h>
int main()
{
	int n,i,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x==6|x==28|x==496|x==8128)
		printf("YES\n");
		else
		printf("NO\n");
	}
}