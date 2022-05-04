"""
2022-03-26 16:56:17
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1708 KB
Accepted | 1 * (35 / 100) | 2 ms | 1688 KB
Accepted | 1 * (60 / 100) | 12 ms | 1712 KB

"""

#include<stdio.h>
int main(){
	int x,n,sum=0;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		sum=0; 
		for(j=1;j<=(x/2)+1;j++){
			if(x%j==0){
				sum+=j;
			}
		}
		if(sum==x){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}