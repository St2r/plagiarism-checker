"""
2022-03-27 11:26:56
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1632 KB

"""

#include <stdio.h>
int main()
{
	int n, x, i,j, sum;
	scanf("%d", &n);
    for (i = 0; i < n; i++)
	{
	sum=0;
	scanf("%d", &x);
    for(j=1;j<x;j++)
	{
    if(x%j==0)
    sum+=j;
	}
	if(sum==x)
	printf("YES\n");
	else	
	printf("NO\n");
    }
 	return 0;
}