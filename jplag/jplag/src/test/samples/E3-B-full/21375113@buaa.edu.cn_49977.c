"""
2022-03-29 21:06:32
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1736 KB

"""

#include <stdio.h>
int main(){
	int n,i,x[101],y,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",&x[i]);
	for(i=1;i<=n;i++){y=0;
		for(j=1;j<x[i];j++){
			if(x[i]%j==0) y=y+j;
		}
		if(x[i]==y) printf("YES\n");
		else printf("NO\n");
	}
}