"""
2022-03-29 23:57:33
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1580 KB

"""

#include<stdio.h>
int main()
{
	int i, j, n, m, a;
	
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a);
		m=0;
		j=1;
		while(j<a)
		{
			if(a%j==0)
			{
				m+=j;
			}
			else
			{
				m=m;
			}
			j++;
		}
		
		if(m==a)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}