"""
2022-03-26 09:52:19
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB
Accepted | 1 * (1 / 4) | 2 ms | 1664 KB
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 3 ms | 1664 KB

"""

#include <stdio.h>
#include <math.h>
int judge( int x ) {
	int output=0,sum=1;
	for( int i=2;i<=sqrt(x);i++ ) {
		if( x%i==0 ) {
			sum=sum+i+x/i;
			if( i==sqrt(x) ) {
				sum-=i;
			}
		} 
	}
	if( x==sum ) {
		output=1;
	}
	return output;
}
int main()
{
	int n,a[100];
	scanf("%d",&n);
	for( int i=0;i<n;i++ ) {
		scanf("%d",&a[i]);
	}
	for( int i=0;i<n;i++ ) {
		if( judge(a[i]) ) {
			printf("YES");
		} else {
			printf("NO");
		}
		if( i!=n-1 ) {
			printf("\n");
		}
	} 
	return 0;
}