"""
2022-03-27 16:39:27
AC
1.0
Accepted | 1 * (1 / 4) | 4 ms | 1636 KB
Accepted | 1 * (1 / 4) | 11 ms | 1560 KB
Accepted | 1 * (1 / 4) | 24 ms | 1632 KB
Accepted | 1 * (1 / 4) | 29 ms | 1708 KB
 ms | 1540 KB
Wrong Answer | 0 * (1 / 8) | 2 ms | 1628 KB
Wrong Answer | 0 * (1 / 8) | 2 ms | 1624 KB
Time Limit Exceed | 0 * (1 / 8) | 1000 ms | 884 KB
Time Limit Exceed | 0 * (1 / 8) | 1000 ms | 864 KB

"""

#include<stdio.h>
int main()
{
	int x[1000],n,i,j,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		sum=0;
		for(j=1;j<x[i];j++){
			if(x[i]%j==0){
				sum+=j;
			}
		}
		if(sum==x[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}