"""
2022-03-27 00:01:57
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1640 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int p,n,m=0,i;
	scanf("%d",&p);
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
	
		m=m+i;
		}
		else
		m=m;
	}
	if(m==n)
	printf("YES\n");
	else
	printf("NO\n");
	m=0;
	}
	return 0;
}