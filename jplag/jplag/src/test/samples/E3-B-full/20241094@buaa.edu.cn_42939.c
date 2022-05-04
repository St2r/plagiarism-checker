"""
2022-03-28 20:40:11
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1664 KB

"""

#include<stdio.h>

int main(){
	int n,x,sum,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		sum=0;
		for(j=1;j<x;j++){
			if(x%j==0){
				sum=sum+j;
			}
		}
		if(sum==x){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}