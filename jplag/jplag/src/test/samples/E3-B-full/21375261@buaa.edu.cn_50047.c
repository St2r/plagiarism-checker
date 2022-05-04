"""
2022-03-26 12:40:28
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 3 ms | 1552 KB

"""

#include<stdio.h>

int main()
{
	int n,i,j,a;
	int s=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for(j=1;j<=a/2;j++)
		{
			if(a%j==0)
			s=s+j;
			else
			s=s;
		}
		if(a==s)
		printf("YES\n");
		else
		printf("NO\n");
		s=0;
	}
	return 0;
}