"""
2022-03-26 11:06:38
AC
1.0
Accepted | 1 * (1 / 8) | 2 ms | 1656 KB
Accepted | 1 * (1 / 8) | 2 ms | 1652 KB
Accepted | 1 * (1 / 8) | 11 ms | 1596 KB
Accepted | 1 * (1 / 8) | 2 ms | 1600 KB
Accepted | 1 * (1 / 8) | 2 ms | 1616 KB
Accepted | 1 * (1 / 8) | 22 ms | 1656 KB
Accepted | 1 * (1 / 8) | 2 ms | 1652 KB
Accepted | 1 * (1 / 8) | 2 ms | 1596 KB

"""

#include <stdio.h>
int main()
{
	int n,i=0,m,x=0;
	int a[100];
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a[i]);
		m=a[i]-1;
		while(m>0)
		{
			if(a[i]%m!=0)
				m--;
			else
			{
				x=x+m;
				m--;
			}
		}
		if(x==a[i])
		printf("YES\n");
		else
		printf("NO\n");
		i++;
	}
	return 0;
}