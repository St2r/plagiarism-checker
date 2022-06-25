"""
2022-03-29 09:09:57
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h> 
int main()
{
	double a=0;
	long long n,i=1,j=1,k=1;
	scanf("%lld",&n);
	if(n>=20){
		n=20;
	}
	while(i<=n){
		while(j<=i){
			k=k*j;
			j++;
		}
		a=a+1.0*1/k;
		j=1;
		i++;
		k=1;
	}
	a++;
	printf("%.14f",a);
	return 0;
}