"""
2022-03-29 23:31:19
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1648 KB
Accepted | 1 * (60 / 100) | 2 ms | 1580 KB

"""

#include <stdio.h>
int main()
{
	int n,a[110],i,k,sum;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=0;
		for(k=1;k<a[i];k++){
			if(a[i]%k==0)
			sum=sum+k;
		}
		if(sum==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}