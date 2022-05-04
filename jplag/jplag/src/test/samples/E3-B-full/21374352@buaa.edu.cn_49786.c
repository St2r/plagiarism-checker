"""
2022-03-29 23:38:11
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 1 ms | 1736 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&i);
	if(i==6 || i==28 || i==496 || i==8128){
	printf("YES\n");
	}
	else printf("NO\n");
}
	return 0;
}