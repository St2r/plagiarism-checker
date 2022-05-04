"""
2022-03-26 21:39:10
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 3 ms | 1704 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include <stdio.h>

int main()
{
	int n,x; 
	scanf("%d", &n);
	int i,j;
	int sum;
	for(i=0;i<n;i++){
		sum = 0;
		scanf("%d", &x);
		for(j=1;j<x;j++){
			if(x % j == 0){
				sum = sum + j;
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