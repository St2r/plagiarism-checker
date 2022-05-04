"""
2022-03-28 16:50:11
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1636 KB
Accepted | 1 * (35 / 100) | 2 ms | 1592 KB
Accepted | 1 * (60 / 100) | 2 ms | 1584 KB

"""

#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d",&x);
	while(x--) 
	{
		scanf("%d",&n);
	if(n==6||n==28||n==496||n==8128) puts("YES");
	else puts("NO"); 
}
	return 0;
}