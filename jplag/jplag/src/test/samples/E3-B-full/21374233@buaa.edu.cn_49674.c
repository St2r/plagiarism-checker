"""
2022-03-26 12:37:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 11 ms | 1652 KB
Accepted | 1 * (60 / 100) | 7 ms | 1552 KB

"""

#include<stdio.h>

int main(){
	int n,x,i,sum=0;
	scanf("%d",&n);
	while(n--){
		sum=0;
		scanf("%d",&x);
		for(i=1;i<=x/2;i++){
			if(x%i==0) {
			sum+=i;}
		}
		if(sum==x) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}