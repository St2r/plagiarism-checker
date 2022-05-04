"""
2022-03-29 19:45:04
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1576 KB

"""

#include <stdio.h>
int main()
{
	int A[105];
	int n,a,b;
	scanf ("%d",&n);
	
	while(n--)
	{	int sum=0;
		scanf ("%d",&a);
		for(b=a-1;b>=1;b--) 
		{
			if (a%b==0)
			{
				sum+=b;
			}
		}
		if (sum==a)
		{
			printf("YES\n");
		}
		else 
		printf ("NO\n");
	}
	return 0;
}