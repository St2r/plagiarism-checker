"""
2022-03-27 12:19:12
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
	int n;
	int x,i,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int sum=0;
		scanf("%d",&x);
		for(k=1;k<x;k++){
			if(x%k==0){
				sum+=k;
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