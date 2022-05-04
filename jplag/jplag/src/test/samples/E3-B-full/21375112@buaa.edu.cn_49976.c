"""
2022-03-29 20:52:42
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1696 KB
Accepted | 1 * (35 / 100) | 0 ms | 1740 KB
Accepted | 1 * (60 / 100) | 2 ms | 1688 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,a[1000],sum;
	scanf("%d",&n);
	n>=1&&n<=100;
	a[1000]>=1&&a[1000]<=1000;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(j=1,sum=0;j<=a[i]/2;j++){
			if(a[i]%j==0)
			{
				sum+=j;
			}
		}
		if(sum==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}