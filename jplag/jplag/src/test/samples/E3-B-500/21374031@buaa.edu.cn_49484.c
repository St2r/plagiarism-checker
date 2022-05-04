"""
2022-03-27 00:11:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>

int main(){
	int n, x, i, j, count=0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		for(j=1, count=0;j<x;j++){
			if(x%j==0){
				count+=j;
			}
		}
		(count==x)?printf("YES\n"):printf("NO\n");
	}
	
	return 0;
}