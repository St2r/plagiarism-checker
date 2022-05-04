"""
2022-03-26 13:25:55
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1696 KB
Accepted | 1 * (60 / 100) | 11 ms | 1704 KB

"""

#include<stdio.h>
int main()
{	int n,i,j,s;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
		for(s=0,j=1;j<a[i];j++)
		{	if(a[i]%j==0)
			{	s+=j;
				//printf("%d\n",j);
				}
		}
	if(s==a[i])
		printf("YES\n");
	else
		printf("NO\n");
	}
	return 0;
}