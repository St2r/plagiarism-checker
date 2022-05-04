"""
2022-03-26 22:27:38
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1600 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,c=0;
	int a[105];
	scanf("%d",&n);
	while(c<n)
	{
		scanf("%d",&a[c]);
		c++;
	}
	for(i=0;i<n;i++)
	{
		int m=0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			m+=j;
		}
		if(m==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}