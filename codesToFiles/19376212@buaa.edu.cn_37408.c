"""
2022-03-26 08:45:12
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1596 KB
Accepted | 1 * (2 / 10) | 17 ms | 1668 KB
Accepted | 1 * (4 / 10) | 3 ms | 1712 KB

"""

#include<stdio.h>

int main()
{
	unsigned long long n,i,k=1;
	double sum=1.0;
	
	scanf("%llu",&n);
	for(i=1;i<=n;i++){
		if(i==18)break;
		k*=i;
		sum+=(1.0/k);
		
	}
	printf("%.14f",sum);
	
	
	return 0;	
}