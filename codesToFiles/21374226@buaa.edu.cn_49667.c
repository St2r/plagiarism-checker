"""
2022-03-26 09:54:48
AC
1.0
Accepted | 1 * (1 / 10) | 19 ms | 1592 KB
Accepted | 1 * (1 / 10) | 11 ms | 1592 KB
Accepted | 1 * (2 / 10) | 11 ms | 1592 KB
Accepted | 1 * (2 / 10) | 15 ms | 1672 KB
Accepted | 1 * (4 / 10) | 11 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,i=0;
	double a=1.0,sum=1.0;
	scanf("%d",&n);
	if(n>=18)n=17;
	for(i=1;i<=n;i++){
		a/=i;
		sum+=a;
	}
	printf("%.14f",sum);
	return 0;
}