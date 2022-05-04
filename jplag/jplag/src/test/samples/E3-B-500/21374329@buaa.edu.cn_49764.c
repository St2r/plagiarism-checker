"""
2022-03-26 12:23:30
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1644 KB
Accepted | 1 * (35 / 100) | 9 ms | 1636 KB
Accepted | 1 * (60 / 100) | 10 ms | 1648 KB

"""

#include <stdio.h>
#include <string.h>
#include <math.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=1;i<=n;i++)
	{
		int mi=0;
		scanf("%d",&a[i]);
		int x=a[i];
		for(int k=1;k<x;k++)
		{
			if(x%k==0)
			{
			  mi=mi+k;
			}
		}
		if((mi)==a[i])
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