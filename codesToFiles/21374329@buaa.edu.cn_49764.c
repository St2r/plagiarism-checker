"""
2022-03-26 14:50:08
AC
1.0
Accepted | 1 * (1 / 10) | 5 ms | 1612 KB
Accepted | 1 * (1 / 10) | 14 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 14 ms | 1624 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB

"""

#include <stdio.h>
#include <string.h>
#include <math.h> 
int main()
{
	int n;
	scanf("%d",&n);
	if(n>20) 
	{
	 n=20;
	}
	double tmp=1.0,ans=1.0;
	for(int i=1;i<=n;i++)
	{
		tmp*=i;
		ans+=1/tmp;
	}
	printf("%.14lf\n",ans);
	return 0;
}