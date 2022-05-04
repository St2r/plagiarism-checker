"""
2022-03-28 22:41:33
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1576 KB
Accepted | 1 * (35 / 100) | 1 ms | 1584 KB
Accepted | 1 * (60 / 100) | 3 ms | 1636 KB

"""

#include <stdio.h>
int main()
{
	int n;
	int x[10000];
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x[i]);
	}
	for(i=1;i<=n;i++){
		int sum=0;
		for(j=1;j<x[i];j++){
			if(x[i]%j==0){
				sum=sum+j;
			}
		}
		if(sum==x[i]){
				printf("YES\n");
			} else{
				printf("NO\n");
			}
	}
	return 0;
}