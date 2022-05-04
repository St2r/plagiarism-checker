"""
2022-03-29 17:35:16
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 3 ms | 1696 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,m;
	scanf("%d",&n);
	int a;
	for(i=0;i<n;i++)
	{
		m=0;
		scanf("%d",&a);
		for(j=1;j<=a/2;j++)
		{
			if(a%j==0)
			m=m+j;
		}
		if(m==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}