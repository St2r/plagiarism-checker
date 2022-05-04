"""
2022-03-27 19:02:22
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1568 KB
Accepted | 1 * (1 / 4) | 4 ms | 1604 KB
Accepted | 1 * (1 / 4) | 16 ms | 1632 KB
Accepted | 1 * (1 / 4) | 8 ms | 1604 KB

"""

#include <stdio.h>
int main ()
{
	int a,n,b,i=1,c=1,sum=0;
	scanf("%d",&n);
	while (scanf("%d",&a)!=EOF)
	{
		while (i<=a)
		{
			b=a/i;
		    if (b*i==a)
		    {
		    	sum+=i;
			}
			i++; 
		}
		sum=sum/2;
		if (sum==a)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
		i=1;
		c++;
		if (c>n)
		break;
	}
	return 0;
}