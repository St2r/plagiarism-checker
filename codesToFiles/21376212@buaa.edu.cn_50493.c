"""
2022-03-29 23:49:31
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

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
	printf("%0.14f",e);
	return 0;
}





long long fun(long long x)
{
	long long m=1,j;
	for(j=x;j>0;j--){
		m=m*j;
	}
	return m;
}