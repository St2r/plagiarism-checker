"""
2022-03-26 08:17:52
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1548 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
long long solve1(int b)
{
	long long q=1;
	for(int i=1;i<=b;i++)
	{
		q=q*i;
	}
	return q;
}
int main()
{
	int a;
	double ans;
	scanf("%d",&a);
	if(a<20)
	{
	for(int i=1;i<=a;i++)
	{
		ans=ans+1.0/solve1(i);
	}
	printf("%.14f\n",ans+1);
	}
	else
	{
		printf("2.71828182845905\n");
	}
	return 0;
}