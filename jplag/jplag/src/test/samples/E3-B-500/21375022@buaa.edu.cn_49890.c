"""
2022-03-29 00:19:11
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1520 KB
Accepted | 1 * (35 / 100) | 1 ms | 1596 KB
Accepted | 1 * (60 / 100) | 1 ms | 1624 KB

"""

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int x;
		scanf("%d",&x);
		if(x!=6&&x!=28&&x!=496&&x!=8128)
			puts("NO");
		else
			puts("YES");
	}
}