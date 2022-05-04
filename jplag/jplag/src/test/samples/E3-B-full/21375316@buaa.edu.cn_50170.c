"""
2022-03-26 16:40:55
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 2088 KB
Accepted | 1 * (35 / 100) | 11 ms | 2020 KB
Accepted | 1 * (60 / 100) | 13 ms | 2100 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n,i=0,j,k,s,m;
	int a[105];
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	for(j=0;j<n;j++){
		s=0;
		m=sqrt(a[j]);
		for(k=2;k<(m+1);k++){
			if(a[j]%k==0){
				s+=(a[j]/k)+k;
				continue;
			}
		}
		if((s+1)==a[j])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
 }