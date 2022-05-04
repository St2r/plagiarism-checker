"""
2022-03-26 08:08:41
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1608 KB
Accepted | 1 * (35 / 100) | 2 ms | 1668 KB
Accepted | 1 * (60 / 100) | 2 ms | 1668 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int solve(int b)
{
	int q=1;
	for(int i=2;i*i<=b;i++)
	{
		if(b%i==0)
		{
			q=q+i+b/i;
		}
	}
	if(q==b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a;
	int b;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		if(solve(b)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}