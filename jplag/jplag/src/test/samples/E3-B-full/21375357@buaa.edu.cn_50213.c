"""
2022-03-26 13:19:02
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1564 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 6 ms | 1640 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,n,i,j,k=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum=0;
	scanf("%d",&a);
	for(j=1;j<a;j++){
		if(a%j==0)
		sum=sum+j;
	}
	if(sum==a)
	printf("YES\n");
	else
	printf("NO\n");
	}
	return 0;
}