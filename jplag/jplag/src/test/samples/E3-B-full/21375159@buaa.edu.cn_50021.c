"""
2022-03-27 00:47:42
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1548 KB

"""

#include<stdio.h>
int main()
{
	int n,s;
	scanf("%d",&n);
	while(n--)
	{
		int a;
		scanf("%d",&a);
		int k=a/2;
		for(int i=1;i<=k;i++)
		{
			if(a%i==0)
			s=s+i;
		}
		if(s==a)
		printf("YES\n");
		else
		printf("NO\n");
		s=0;
	}
    return 0;
 }