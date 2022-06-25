"""
2022-03-29 20:02:19
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1640 KB
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 0 ms | 1664 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,i,a;
	double sum,E= 2.71828182845905,eps=5e-15;
	scanf("%lld",&n);
	
	a=1;
	sum=1;
	for(i=1;i<=n;i++)
	{
		a=a*i;
		sum=sum+1.0/a;
		if(fabs(E-sum)<=eps)
		{
			break;
		}
	}
	
	printf("%.14f",sum);
	
	return 0;
}