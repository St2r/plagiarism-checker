"""
2022-03-28 22:40:54
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1568 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include <stdio.h>
int main()
{
	int n,a,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int s=0;
		scanf("%d",&a);
		if(a>1)
		{
		   for(j=1;j<a;j++)
			{
				if(a%j==0)
				{
					s=s+j;
				}
			}
		}
		if(s!=a)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
		
	return 0;
}