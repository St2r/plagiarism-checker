"""
2022-03-27 23:30:10
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1524 KB
Accepted | 1 * (60 / 100) | 3 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,k,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		k=0;
		for(j=1;j<x;j++){
			if((x%j)==0){
				k=k+j;				
			}
		}	
		if(k==x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
 }