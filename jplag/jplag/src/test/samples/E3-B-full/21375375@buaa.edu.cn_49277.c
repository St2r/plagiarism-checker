"""
2022-03-26 14:54:16
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1544 KB
Accepted | 1 * (35 / 100) | 3 ms | 1652 KB
Accepted | 1 * (60 / 100) | 12 ms | 1556 KB

"""

#include<stdio.h>

int main(){
	int n,x,i,j,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		sum=0;
		for(j=1;j<x;j++){
			if(x%j==0){
				sum+=j;
			}
		}
		if(sum==x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
}