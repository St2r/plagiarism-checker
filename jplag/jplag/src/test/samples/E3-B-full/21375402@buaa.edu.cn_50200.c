"""
2022-03-26 14:51:58
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,x,i,j,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		sum=0;
		for(j=1;j<=x/2;j++){
			if(x%j==0) sum+=j;
		}
		printf(sum==x?"YES\n":"NO\n");
	}
	return 0;
}