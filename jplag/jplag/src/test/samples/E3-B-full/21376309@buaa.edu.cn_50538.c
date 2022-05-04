"""
2022-03-26 09:21:17
AC
1.0
Accepted | 1 * (5 / 100) | 13 ms | 1608 KB
Accepted | 1 * (35 / 100) | 10 ms | 1660 KB
Accepted | 1 * (60 / 100) | 24 ms | 1660 KB

"""

#include<stdio.h>
int a,n,i,j,m,flag;
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		flag = 0;
		scanf("%d",&a);
		for(j=1;j<a;j++){
		if((a%j)==0) flag+=j;
		}
		if(flag==a) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}