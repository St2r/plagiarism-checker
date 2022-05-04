"""
2022-03-27 17:25:35
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1560 KB
Accepted | 1 * (35 / 100) | 13 ms | 1608 KB
Accepted | 1 * (60 / 100) | 15 ms | 1600 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,a;
	i=0;
	for(i=0;i<n;i++){
		scanf("%d",&a);
		int sum;
		sum=0;
		int k;
		for(k=1;k<a;k++){
			if(a%k==0) sum=sum+k;
		}
		if(sum==a)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}