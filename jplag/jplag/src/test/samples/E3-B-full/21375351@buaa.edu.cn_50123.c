"""
2022-03-26 13:28:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1688 KB
Accepted | 1 * (35 / 100) | 2 ms | 1556 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n,x;
	int sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		for(int j=1;j<x;j++){
			if(x%j==0){
			sum=sum+j;	
			}
	
		}
		if(sum==x){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		sum=0;
		
	}
	return 0;
 }