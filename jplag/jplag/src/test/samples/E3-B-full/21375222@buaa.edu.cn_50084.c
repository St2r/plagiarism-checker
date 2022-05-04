"""
2022-03-26 14:35:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1688 KB
Accepted | 1 * (35 / 100) | 2 ms | 1600 KB
Accepted | 1 * (60 / 100) | 4 ms | 1704 KB

"""

#include <stdio.h>
int main()
{
	int n,i=1,a[200],j,sum=0;
	scanf("%d", &n);
	while(i<=n)
	{
		scanf("%d", &a[i]);
		for(j=1;j<a[i];j++)
		{
			if((a[i]%j)==0)
			sum += j;
		}
		if(sum==a[i])
		printf("YES\n");
		else
		printf("NO\n");
		i++;
		sum=0;
	}
	return 0;
 }