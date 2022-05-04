"""
2022-03-29 17:59:17
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 2136 KB
Accepted | 1 * (35 / 100) | 1 ms | 2060 KB
Accepted | 1 * (60 / 100) | 1 ms | 2056 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	short a[100],n,i,j,k,s=1;
	scanf("%hd",&n);
	for( i=0 ; i<n ; i++){
		scanf("%hd",&a[i]);
	}
	for( j=0 ; j<n ; j++){
		for( k=2 ; k<sqrt((double)a[j]) ; k++){
			if(a[j]%k==0)
			   s+=(k+a[j]/k);
		}
		if(a[j]==s)
		printf("YES\n");
		else printf("NO\n");
		s=1;
	}
	return 0;
}