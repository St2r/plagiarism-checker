"""
2022-03-27 22:21:10
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include<stdio.h>
#define eps  1e-15
int main()
{
	int n,i;
	double y,sum=1;
	long long x=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		x=x*i;
		y=1.0/x;
		if(y<eps)
		break;
		sum=sum+y;
	}
	printf("%.14f",sum);
	return 0;
 }