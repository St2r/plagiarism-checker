"""
2022-03-26 09:17:35
AC
1.0
Accepted | 1 * (5 / 100) | 17 ms | 1560 KB
Accepted | 1 * (35 / 100) | 21 ms | 1612 KB
Accepted | 1 * (60 / 100) | 13 ms | 1576 KB

"""

#include <stdio.h>


int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		if(x==6 || x==28 || x==496 || x==8128){
			puts("YES");
		}else{
			puts("NO");
		}
	}
	return 0;
}