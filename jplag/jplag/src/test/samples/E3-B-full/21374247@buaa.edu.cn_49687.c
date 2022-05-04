"""
2022-03-28 20:48:02
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1588 KB
Accepted | 1 * (35 / 100) | 1 ms | 1592 KB
Accepted | 1 * (60 / 100) | 3 ms | 1700 KB

"""

#include <stdio.h>
int main(){
	int m[10000],n,i,p=0;
	long long int sum[10000];
	scanf("%d",&i);
	for( p=0;p<i;p++){
	scanf("%d",&m[p]);
	}
	for( p=0;p<i;p++){
	for(n=1;n<m[p]-1;n++){
		if(m[p] % n==0)
		sum[p]=sum[p]+n;
		}
	if(m[p]==sum[p])
		printf("YES\n");
	else
		printf("NO\n");
	}
	

		return 0;
}