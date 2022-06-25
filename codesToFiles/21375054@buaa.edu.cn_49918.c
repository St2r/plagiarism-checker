"""
2022-03-26 18:58:08
TLE
0.4
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1652 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 956 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double a=1.00000000000000;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		int m=1;
		for(j=1;j<=i;j++){
			m*=j;
		}
		a+=(1.00000000000000)/m;
	}
	printf("%.14lf",a);
	return 0;
}