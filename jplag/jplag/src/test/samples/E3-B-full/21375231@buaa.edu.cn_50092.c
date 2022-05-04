"""
2022-03-26 10:23:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1672 KB
Accepted | 1 * (35 / 100) | 9 ms | 1688 KB
Accepted | 1 * (60 / 100) | 10 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
	int n,a;
	int i,t,s,j;
	scanf("%d",&a);
	for(j=0;j<a;j++)
{
	s=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		s=(s+(n/i));
	}
	if(s==n)
	printf("YES\n");
	else
	printf("NO\n");
}
	return 0;
}