"""
2022-03-26 15:48:02
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1600 KB
Accepted | 1 * (35 / 100) | 2 ms | 1540 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include <stdio.h>
#define len 100

int main(){
	int n,b[len];
	int a[len];
	int sum[len];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i]);
		 sum[i]=0;
		for(int j=1;j<b[i];j++){
			if(b[i]%j==0){
		       sum[i]=sum[i]+j;
			}
			else{
				sum[i]=sum[i];
			}
		}
	}
		for(int i=1;i<=n;i++){
		if(sum[i]==b[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}