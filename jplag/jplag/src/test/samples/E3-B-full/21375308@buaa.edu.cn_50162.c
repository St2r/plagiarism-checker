"""
2022-03-26 19:37:26
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int n, x[105], sum[10003];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &x[i]);
		for(int j=1;j<x[i];j++){
			if(x[i]%j==0){
				sum[i]+=j;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(sum[i]==x[i])
		printf("YES\n");
		else if(sum[i]!=x[i])
		printf("NO\n");
	}
	
	return 0;
}