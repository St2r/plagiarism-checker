"""
2022-03-27 10:51:29
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 2 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int n,a,i;
	scanf("%d",&n);
	for(i=0;i<n;i ++)
	{
		scanf("%d",&a);
		if((a==6)|(a==28)|(a==496)|(a==8128))
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}