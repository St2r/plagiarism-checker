"""
2022-03-26 16:29:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1560 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
#include<math.h>
double J(int n)
{
	double ans=1;
	for(int i=1;i<=n;i++)
	{
		ans*=i;
	}
	return ans;
}
int main()
{
	int n;
	scanf("%d",&n);
	double ans=1;
	for(int i=1;i<=n;i++)
	{
		if(((double)1.0/J(i))<1e-15)
		break;
		else
		ans+=(double)1.0/J(i);	
	}
	printf("%.14lf",ans);
    return 0;
}