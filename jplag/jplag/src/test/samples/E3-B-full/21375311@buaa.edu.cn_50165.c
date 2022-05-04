"""
2022-03-28 19:46:41
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1744 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 2 ms | 1696 KB

"""

#include <stdio.h>
int main(){
	int n,a[10010];
	scanf("%d",&n);
	for ( int i=1; i<=n; i++){
		scanf("%d",&a[i]);
		int sum=0;
		for( int k=1;k<a[i];k++){
			if ( a[i] % k == 0){
				sum+=k;
			}
		}
		if ( sum == a[i] ) {
			printf("YES\n");
		}	else {
			printf("NO\n");
		}
	}
	
}