"""
2022-03-26 08:12:21
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1536 KB
Accepted | 1 * (60 / 100) | 21 ms | 1528 KB

"""

#include<stdio.h>
int main(){
	int n,a,ans=0,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		for(j=1;j<a;j++){
			if(a%j==0) ans+=j;
		}
		if(ans==a) printf("YES\n");
		else printf("NO\n");
		ans=0;
	}
}