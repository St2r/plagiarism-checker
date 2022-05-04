"""
2022-03-28 20:04:03
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 3 ms | 1688 KB

"""

#include<stdio.h>

int main()
{
	int n, i, xi, j, sum;
	scanf("%d ", &n);
	for(i = 0; i < n; i++){
		sum = 0; 
		scanf("%d", &xi);
		for(j = 1; j < xi; j++){
			if(0 == xi % j){
				sum += j;
			}
		}
		if(sum == xi){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
 }