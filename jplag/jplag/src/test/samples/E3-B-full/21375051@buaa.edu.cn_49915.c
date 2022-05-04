"""
2022-03-26 17:48:43
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1676 KB
Accepted | 1 * (35 / 100) | 2 ms | 1620 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include <stdio.h>
int main(){
	int i,j,k,n,sum=0;
	int num[200];
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		scanf("%d",&num[j]);
	}
	
	for(k=1;k<=n;k++){
		sum=0;
		for(i=1;i<=(num[k]-1);i++){
			if(num[k]%i==0){
				sum+=i;
			}
		}
		if(sum==num[k]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
}