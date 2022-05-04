"""
2022-03-26 10:43:34
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 5 ms | 1672 KB
Accepted | 1 * (2 / 10) | 12 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1592 KB
Accepted | 1 * (4 / 10) | 18 ms | 1524 KB

"""

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int a,n,cnt;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if((a==6)||(a==28)||(a==496)||(a==8128)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}