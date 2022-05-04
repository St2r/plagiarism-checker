"""
2022-03-26 09:30:14
AC
1.0
Accepted | 1 * (1 / 10) | 6 ms | 1656 KB
Accepted | 1 * (1 / 10) | 9 ms | 1668 KB
Accepted | 1 * (2 / 10) | 9 ms | 1604 KB
Accepted | 1 * (2 / 10) | 9 ms | 1604 KB
Accepted | 1 * (4 / 10) | 9 ms | 1656 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j,x,sum;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		sum=0;
		scanf("%d", &x);
		for(j=1;j<x;j++){
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
	
	return 0;
}