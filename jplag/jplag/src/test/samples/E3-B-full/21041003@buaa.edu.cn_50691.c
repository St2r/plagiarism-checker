"""
2022-03-26 15:56:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1676 KB
Accepted | 1 * (35 / 100) | 2 ms | 1536 KB
Accepted | 1 * (60 / 100) | 4 ms | 1540 KB

"""

#include <stdio.h>
int main()
{
	int n, i, j, x;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		int sum=0;
		for(j=1;j<x;j++){
			if(x%j==0){
				sum+=j;
			}
		}
		if(sum==x){printf("YES\n");
		}
		else{printf("NO\n");
		}
			}
			return 0;
}