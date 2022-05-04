"""
2022-03-30 00:14:07
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1740 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,j,m;
    scanf("%d", &n);
	int a[n];
	for (i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
    for (i=0; i<n; i++)
    {
    	m=0;
    	for(j=1;j<a[i];j++)
    	{
    		if(a[i]%j==0)
    			m=m+j;
		}
		if (m==a[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
    return 0;
}