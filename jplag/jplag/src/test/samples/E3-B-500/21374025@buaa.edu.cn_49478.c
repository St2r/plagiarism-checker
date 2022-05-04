"""
2022-03-27 14:39:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1480 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 4 ms | 1712 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int n,a,i,b[10005],k,sum;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		k=0;
		sum=0;
		for(i=1;i<a;i++)
		{
			if(a%i==0)
			{
				b[k]=i;
				k++;
			}
		}
		k=k-1;
		for(i=0;i<=k;i++)
		{
			sum+=b[i];
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
		
	}
	return 0;
}