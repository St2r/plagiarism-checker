"""
2022-03-28 22:10:47
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 0 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include<stdio.h>
#include<math.h>
#define ll long long
ll minn(ll a,ll b)
{
	return a<b?a:b;
}
int main()
{
	ll n,i,j=1;
	double s=1.0;
	scanf("%lld",&n);
	for(i=1;i<=minn(n,18ll);i++)
	{
		j*=i;
		s+=1.0/j;
		//if(1.0/j<1e-16) break;
	}
	printf("%.14f",s);
	return 0;
}