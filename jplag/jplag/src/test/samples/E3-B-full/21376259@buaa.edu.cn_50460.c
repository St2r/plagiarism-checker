"""
2022-03-29 21:46:47
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1728 KB

"""

#include<stdio.h>
int main()
{
	int n=0;
	int a=0,b=0,m=1;
	int i=1;
	scanf("%d",&n);
	while(i<=n)
	{scanf("%d",&a);
	m=1;
	b=0;
	while(m<a)
	{if(a%m==0)
	b=b+m;
	m++;
	}
	if(b==a)
	printf("YES\n");
	else
	printf("NO\n");
	i++;
	}
	return 0;
}