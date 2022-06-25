"""
2022-03-26 14:12:53
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 3 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,i,j,s; 
	
	scanf("%lld",&n);
	double ans=1,temp;
	if(n>=17)
	{
		printf("2.71828182845905");
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		s=1;
		for(j=1;j<=i;j++)
		{
		s*=j;
		}
		temp=1.0/s;
		ans+=temp;
	}
	printf("%.14lf\n",ans);
	return 0;
}