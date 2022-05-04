"""
2022-03-29 16:48:38
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include <stdio.h>

int main(){
	int n,x;
	int y;
	int j;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		y=0;
		j=1;
		while(j<x){
			if(x % j == 0){
			y=y+j;
				
			}
			j++;
	}
	if(y == x)
		printf("YES\n");
	else printf("NO\n");
	}
return 0;
}