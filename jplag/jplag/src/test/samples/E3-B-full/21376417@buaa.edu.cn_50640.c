"""
2022-03-27 14:56:50
AC
1.0
Accepted | 1 * (1 / 4) | 9 ms | 2040 KB
Accepted | 1 * (1 / 4) | 3 ms | 2108 KB
Accepted | 1 * (1 / 4) | 39 ms | 2380 KB
Accepted | 1 * (1 / 4) | 37 ms | 2436 KB

"""

#include<stdio.h>
int main(){
	int x,i,sum,n;
	
	scanf("%d",&n);
	
	while(n>0){
		scanf("%d",&x);
		sum=0;
		for(i=1;i<x;i++){
			if(x%i==0){
				sum+=i;
			}
		}
		if(sum==x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		n--;
	}
	
	return 0;
}