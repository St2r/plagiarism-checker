"""
2022-03-29 00:40:58
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double e=1,j=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j*=i;
		e+=(1/j);
		if(i>100)
		break;
	}
	printf("%.14lf\n",e);
	return 0;
}