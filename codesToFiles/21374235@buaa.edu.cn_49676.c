"""
2022-03-29 00:19:02
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (4 / 10) | 1 ms | 1676 KB

"""

#include <stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	double e=1,d;
	if(n>19)
	n=19;
	for(n;n>0;n=n-1)
	{d=n;
    for(i=1;i<n;i++)
    {d=d*(n-i);
	}	
	e=e+1/d;
}
printf("%1.14lf",e) ;
 return 0;
 }