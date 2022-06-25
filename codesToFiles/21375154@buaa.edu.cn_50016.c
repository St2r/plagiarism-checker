"""
2022-03-28 20:36:22
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include<stdio.h>

int main()
{
	int n, i;
	long long pro = 1;
	double e = 1.0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		pro *= i;
		if((1.0 / pro) < 1E-15){
			break;
		}
		else{
			e += 1.0 / pro;
		}
	}
	printf("%.14f", e);
	return 0;
	 
}