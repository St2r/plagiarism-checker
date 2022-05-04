"""
2022-03-26 08:16:51
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include<stdio.h>
#define N 1000
int main() {
	int i,j,k,n,sum;
	int a[500];

	scanf("%d",&n);
	while(n--) {
		scanf("%d",&i);
		sum=a[0]=1;
		k=0;
		for(j=2; j<=(i/2); j++) {
			if(i%j==0) {
				sum+=j;
				a[++k]=j;
			}

		}
		if(i==sum) {
			printf("YES\n");

		} else {
			printf("NO\n");
		}
	}

	return 0;
}