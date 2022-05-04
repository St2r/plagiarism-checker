"""
2022-03-26 11:03:53
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1616 KB
Accepted | 1 * (60 / 100) | 13 ms | 1616 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,m;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		m=0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
				m=m+j;
		}
		if(m==a[i])
			printf("YES\n");
		else
			printf("NO\n");	
	}
	return 0;
}