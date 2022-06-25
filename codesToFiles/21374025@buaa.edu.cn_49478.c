"""
2022-03-27 19:29:01
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1540 KB
Accepted | 1 * (1 / 4) | 3 ms | 1620 KB
Accepted | 1 * (1 / 4) | 2 ms | 1632 KB
Accepted | 1 * (1 / 4) | 3 ms | 1564 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int n,i;
	double S=1,an=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		an*=1.0*1/i;
		S+=an;
		if(i>=17)
		break;
	}
	printf("%.14lf",S);
	return 0;
}