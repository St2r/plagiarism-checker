"""
2022-03-26 23:29:09
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	long long int n,i,sum = 1;
	double e = 1;
	scanf("%lld",&n);
	if(n < 50){for(i=1;i<=n;i++){
		sum *= i;
		e = e + 0.1 / sum * 10; 
		//TODO
	}
	}
	if(n >= 50){for(i=1;i<=20;i++){
			sum *= i;
			e = e + 0.1 / sum * 10; 
			//TODO
		}
		}
	printf("%.14f",e);
	return 0;
}