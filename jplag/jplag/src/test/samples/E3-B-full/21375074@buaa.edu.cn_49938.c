"""
2022-03-28 15:51:12
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 3 ms | 1676 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include<stdio.h>
int main(){
	int n,i,a,sum=0,x;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a);
		for(x=1;x<a;x++){
			if(a%x==0){
				sum=sum+x;
			}}
			if(sum==a){
				printf("YES\n");
			}
			else if(sum!=0) printf("NO\n");
		sum=0;
		}

		return 0;
	}