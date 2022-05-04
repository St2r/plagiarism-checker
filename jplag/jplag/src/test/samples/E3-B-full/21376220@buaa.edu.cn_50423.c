"""
2022-03-26 08:38:35
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1660 KB
Accepted | 1 * (35 / 100) | 14 ms | 1656 KB
Accepted | 1 * (60 / 100) | 17 ms | 1608 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
	int n,x,sum;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d",&x);
	    for(int j=1;j<=x/2;j++)
	    {
	    	if(x%j==0)
	    	  sum+=j;
		}
		if(sum==x)
		  printf("YES\n");
		else printf("NO\n");
	}
   return 0;
}