"""
2022-03-26 20:25:53
AC
1.0
Accepted | 1 * (1 / 5) | 262 ms | 1756 KB
Accepted | 1 * (1 / 5) | 7 ms | 1632 KB
Accepted | 1 * (1 / 5) | 26 ms | 1688 KB
Accepted | 1 * (1 / 5) | 9 ms | 1660 KB
Accepted | 1 * (1 / 5) | 9 ms | 1612 KB

"""

#include <stdio.h>
int main()
{
	int n,x[10001],i,j,num;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	scanf("%d\n",&x[i]);
    for(i=1;i<=n;i++)
	{
		num=0;
	  for(j=1;j<=x[i]/2;j++)
	  {
	    if((x[i]%j)==0)
	       num+=j;
      }
    
    if(x[i]==num)
    printf("YES\n");
    else
    printf("NO\n");
	}
    return 0;
}