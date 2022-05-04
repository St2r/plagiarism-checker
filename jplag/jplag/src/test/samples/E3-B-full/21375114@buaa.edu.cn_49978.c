"""
2022-03-29 21:53:28
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1580 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 2 ms | 1580 KB

"""

#include <stdio.h>
int main(){
	int n,i,x[1001],y,j;
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