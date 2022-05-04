"""
2022-03-28 19:21:26
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1556 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 20 ms | 1552 KB

"""

#include <stdio.h>
int main()
{
	int n;
	int i,j,k;
	int a[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int m=0;
	for(j=0;j<n;j++)
	{
		m=0;
		for(k=1;k<a[j];k++)
		{
			if(a[j]%k==0)
				m=m+k;
			}
			if(m==a[j])
				printf("YES\n");
			else if(m!=a[j])
				printf("NO\n");
		}
	return 0;
}