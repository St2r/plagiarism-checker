"""
2022-03-27 17:01:36
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 2088 KB
Accepted | 1 * (35 / 100) | 10 ms | 2008 KB
Accepted | 1 * (60 / 100) | 9 ms | 2012 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n,a[110],i,j,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b=0;
		for(j=2;j<=sqrt(a[i]);j++){
			if(a[i]%j==0){
				b=b+j+a[i]/j;
			}
		}
		if(b+1==a[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}