"""
2022-03-26 16:49:32
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1636 KB
Accepted | 1 * (35 / 100) | 9 ms | 1656 KB
Accepted | 1 * (60 / 100) | 11 ms | 1608 KB

"""

#include<stdio.h>
int main()
{
	int n,i,a,j,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		sum=0;
		for(j=1;j<a;j++)	{
			if(a%j==0) sum+=j;
		}
		printf(sum==a?"YES\n":"NO\n");
	}
	return 0;
}