"""
2022-03-26 17:43:48
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 3 ms | 1676 KB

"""

#include <stdio.h>

int main()
{
	long long n,t;
	int i=1,k;
	double sum=1;
	scanf("%lld",&n);
	if(n<=18){
		while(i<=n){
			t=1;
			k=1;
			while(k<=i){
				t=t*k;
				k++;
			}
			sum=sum+1.0*1/t;
			i++;
		}
		printf("%.14f\n",sum);
	}
	else{
		printf("2.71828182845905\n");
	}
	return 0;
}