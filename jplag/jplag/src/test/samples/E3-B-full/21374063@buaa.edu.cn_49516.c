"""
2022-03-28 21:07:08
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1648 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	int n,x,i,j,all=1;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{	
	    scanf("%d",&x);
	    for(j=2;j<=x/2;j++)
	    {
	    	if(x%j==0)all+=j;	
		}
		if(all==x)printf("YES\n");
	    	    else printf("NO\n");
	    all=1; 
	}
	return 0;
}