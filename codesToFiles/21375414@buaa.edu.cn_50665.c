"""
2022-03-28 21:37:47
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include <stdio.h>
#include <math.h> 
int main()
{
	int n,i=1;
	double sum=1,b,j;
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;b=1;
		while(j<=i)
		{
			b=b*j;
			j=j+1;
		}
		sum=sum+1/b;
		i=i+1;
		if(i==20)break; 
	}
	printf("%.14lf",sum);
	return 0;
 }