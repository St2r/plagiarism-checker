"""
2022-03-29 21:47:34
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1624 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include <stdio.h>
#define N 101
int main ()
{
    int n ,i ,a,b,sum;
	scanf ("%d",&n);

	for (i=0;i<n;i++)
	{
		scanf ("%d",&a);
		for (b=2,sum=1;b<a;b++)
		{
			if (a%b==0)
			sum+=b;
		}
		if (sum==a)
		printf ("YES\n");
		else
		printf ("NO\n");
	}
	return 0;
}