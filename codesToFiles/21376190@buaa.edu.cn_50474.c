"""
2022-03-26 15:28:46
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1692 KB
Accepted | 1 * (1 / 4) | 3 ms | 1692 KB
Accepted | 1 * (1 / 4) | 5 ms | 1676 KB
Accepted | 1 * (1 / 4) | 2 ms | 1620 KB
B

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	double m,sum;
	sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		m=1;
		for(j=1;j<=i;j++){
			m=m*j;
		}
		m=1.0/m;
		sum=sum+m;
	}
	printf("%.14f",sum);
	return 0;
}