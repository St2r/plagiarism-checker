"""
2022-03-26 15:27:24
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1680 KB
Accepted | 1 * (1 / 4) | 2 ms | 1628 KB
Accepted | 1 * (1 / 4) | 6 ms | 1680 KB
Accepted | 1 * (1 / 4) | 3 ms | 1652 KB

"""

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	long long cnt=1;
	double ans=1;
	int i;
	if(n==1){
		printf("%.14f",ans+1);
		return 0;
	}
	if(n<=17){
	for(i=1;i<=n;i++){
		cnt*=i;
		ans+=1.0/cnt;
		}
		printf("%.14f",ans);
	}
	else printf("2.71828182845905");
	return 0;
}