"""
2022-03-26 20:16:05
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1672 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 21 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1624 KB

"""

#include<stdio.h>
#include<math.h> 
int main()
{
	int a,i=1;
	double sum=1,x=1;
	scanf("%d",&a);
	while(i<=a&&fabs(x)>=1e-14)
	{
		x/=i;
		sum+=x;
		i++;
	}
	printf("%.14lf",sum);
}