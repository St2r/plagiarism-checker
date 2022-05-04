"""
2022-03-28 10:03:05
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1692 KB
Accepted | 1 * (60 / 100) | 4 ms | 1704 KB

"""

#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n,x,y=0;
	scanf("%d",&n);
	while(scanf("%d",&x)!=EOF)
	{
		for(int j=1;j<x;j++)
		{
			y=x%j==0?y+j:y;
		}
		y==x?printf("YES\n"):printf("NO\n");
		y=0;
	} 
    return 0;
}