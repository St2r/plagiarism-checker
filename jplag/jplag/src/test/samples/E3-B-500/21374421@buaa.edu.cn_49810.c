"""
2022-03-26 12:53:33
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1712 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int n,i,k,sum=0,a[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=0;
		for(k=1;k<a[i];k++){
			if(!(a[i]%k))
			sum+=k;
		}
		if(sum==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}