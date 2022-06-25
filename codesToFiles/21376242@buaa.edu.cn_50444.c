"""
2022-03-26 22:17:26
AC
1.0
Accepted | 1 * (1 / 6) | 2 ms | 1664 KB
Accepted | 1 * (1 / 6) | 2 ms | 1616 KB
Accepted | 1 * (1 / 6) | 9 ms | 1640 KB
Accepted | 1 * (1 / 6) | 14 ms | 1640 KB
Accepted | 1 * (1 / 6) | 3 ms | 1664 KB
Accepted | 1 * (1 / 6) | 8 ms | 1660 KB

"""

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int i,k,n;
	double e=1;
	long long a[20];
	a[0]=1;
	scanf("%d",&n);
	if(n>18)
	n=18;

	for(i=1;i<=n;i++)
	{
	a[i]=a[i-1]*i;
	
    }
    
    for(i=1;i<=n;i++)
	{
		e=e+1.0/(a[i]);
		
	}
	printf("%.14lf",e);
	return 0;
}