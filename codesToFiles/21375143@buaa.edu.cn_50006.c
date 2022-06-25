"""
2022-03-27 17:03:15
WA
0.4
Wrong Answer | 0 * (1 / 10) | 3 ms | 1664 KB
Wrong Answer | 0 * (1 / 10) | 2 ms | 1716 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1628 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include<stdio.h>
int main()
{
	int i;
	long long n,d=1;
	double e=1.0;
	scanf("%d",&n);
	if(n<=25){
		for(i=1;i<=n;i++){
			d=d*i;
			e=(double)1/d+e;
		}
	}
	else{
		for(i=1;i<=25;i++){
			d=d*i;
			e=(double)1/d+e;
		}
	}
	printf("%.14lf",e);
	return 0;
}