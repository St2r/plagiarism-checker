"""
2022-03-29 19:22:00
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1676 KB
Accepted | 1 * (60 / 100) | 0 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&i);
		if(i==6)printf("YES\n");
		else if(i==28)printf("YES\n");
		else if(i==496)printf("YES\n");
		else if(i==8128)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}