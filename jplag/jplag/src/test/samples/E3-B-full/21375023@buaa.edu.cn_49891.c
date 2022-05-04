"""
2022-03-26 18:39:57
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 6 ms | 1652 KB

"""

#include<stdio.h>
int main(){
	int n,i,k,j,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&k);
		for(j=1;j<k;j++){
			if(k%j==0){
				sum+=j;
			}
		}
		if(sum==k){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}