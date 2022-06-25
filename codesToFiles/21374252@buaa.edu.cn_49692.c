"""
2022-03-29 08:47:45
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1692 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
	long long int n;
	int i=1;
	double e=1;
	double m=1;
	scanf("%lld",&n);
	if(n<20){
		while(i<=n){
			m=m*i;
			e=e+1/m;
			i++;
		}
	}
	else{
	while(i<=20){
	m=m*i;
	e=e+1/m;
	i++;
	}}
	printf("%.14f",e);
	return 0;
}