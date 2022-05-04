"""
2022-03-28 19:37:05
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1588 KB
Accepted | 1 * (60 / 100) | 2 ms | 1576 KB

"""

#include <stdio.h>
int main()
{
	int n,s;
	int a[1000]={};
	s=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(int k=1;k<a[i];k++)
		{
			if(a[i]%k==0)
			s=s+k;
		}
		if(s==a[i])
		printf("YES\n");
		else
		printf("NO\n");
		s=0;
	}
	return 0;
}