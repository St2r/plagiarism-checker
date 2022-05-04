"""
2022-03-28 22:44:19
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1744 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include<stdio.h>

int main()
{
	int n,i,j,k,sum=0;
	int x[101]={0},a[10001]={0};
	
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&x[i]);
		for (j=1;j<x[i];j++){
			if (x[i]%j==0){
				sum+=j;
			}
		}
		if (sum==x[i]){
			printf("YES\n");
		}else {
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}