"""
2022-03-26 10:17:38
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 8 ms | 1700 KB

"""

#include <stdio.h>
int main()
{
	int b,n;
	scanf("%d",&b);
	while(b--){
	scanf("%d",&n);
	if(n==6||n==28||n==496||n==8128){
		printf("YES\n");
	}else
	printf("NO\n");
}
	return 0;
}