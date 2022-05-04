"""
2022-03-26 15:57:21
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1532 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 5 ms | 1660 KB

"""

#include <stdio.h>
int main(){
	int n,sum[105]={0},x[105];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&x[i]);}
	for(int i=1;i<=n;i++){
		for(int j=1;j<x[i];j++){
				if(x[i]%j==0)
					sum[i]+=j;
			}
			}
	for(int i=1;i<=n;i++){
			
		if(sum[i]==x[i])
			printf("YES\n");
		else 
				printf("NO\n");
	}
	
	return 0;
}