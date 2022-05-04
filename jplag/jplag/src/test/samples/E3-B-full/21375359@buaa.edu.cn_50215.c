"""
2022-03-26 10:08:41
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 1544 KB
Accepted | 1 * (35 / 100) | 15 ms | 1632 KB
Accepted | 1 * (60 / 100) | 18 ms | 1640 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define eps 1e-10
int main ()
{
	int n,i,a[105][2],j;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		scanf("%d",&a[i][1]);
		a[i][2]=0;
		for(j=1;j<a[i][1];j=j+1)
		{
			if(a[i][1]%j==0)
			{
				a[i][2]=a[i][2]+j;
			}			
		}
	}
	for(i=1;i<=n;i=i+1)
	{
		if(a[i][1]==a[i][2])
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