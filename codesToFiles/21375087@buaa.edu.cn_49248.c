"""
2022-03-28 19:58:31
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (4 / 10) | 0 ms | 1756 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double jok=1e-15;
	int i;
	double lit=1;
	double sum=1;
	for(i=1;i<=n;i++){
		lit=lit/i;
		sum=sum+lit;
		if(lit<jok){
			break;
		}
	}
	printf("%.14f",sum);
	return 0;
}