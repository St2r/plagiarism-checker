"""
2022-03-26 13:00:14
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (4 / 10) | 2 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	unsigned long long n,m=1,i,min;
	double t=1;
	scanf("%llu",&n);
	
	min=45;
	if(n>45) {
		n=min;
	}
	for(i=1;i<=n;i++){
		m*=i;
		t+=1.0/m;
	}
	
	printf("%.14lf",t);
	return 0;
}