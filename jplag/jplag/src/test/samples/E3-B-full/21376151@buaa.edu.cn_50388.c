"""
2022-03-27 15:58:09
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1616 KB
Accepted | 1 * (1 / 4) | 3 ms | 1628 KB
Accepted | 1 * (1 / 4) | 3 ms | 1564 KB
Accepted | 1 * (1 / 4) | 4 ms | 1708 KB

"""

#include<stdio.h>
int x[10010];
int main()
{
	int n,i=1,sum=0,k=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		scanf("%d",&x[i]);
	}
	
	for(int j=1;j<=n;j++){
		for(int k=1;k<x[j];k++){
			if(x[j] % k == 0)
			sum+=k;
		}
		if(sum == x[j]){
			printf("YES\n");
		}
		else printf("NO\n");
	sum=0;	

	}
	return 0;
}