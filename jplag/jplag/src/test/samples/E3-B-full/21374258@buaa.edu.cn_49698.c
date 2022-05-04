"""
2022-03-29 15:16:43
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 4 ms | 1624 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
    scanf("%d",&n);
	long long a[n+1];
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	long long b,sum=0;
	for(i=0;i<n;i++){
		for(b=1;b<=(a[i]/2);b++){
			if((a[i]%b)==0)
			{
			sum+=b;
			if((a[i]/b)==b)
			sum+=b;}
			}
		if(sum==a[i])
		printf("YES\n");
		else{
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}