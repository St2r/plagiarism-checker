"""
2022-03-29 19:34:02
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 0 ms | 1664 KB

"""

#include<stdio.h>
long long fun(long long);
int main()
{
	int n,i;
	double e=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i>=18) break;
		e=e+(1.0/(fun(i)));
	}
	printf("%.14f",e);
	return 0;
}

long long fun(long long a)
{
	long long m=1,j;
	for(j=a;j>0;j--){
		m=m*j;
	}
	return m;
}