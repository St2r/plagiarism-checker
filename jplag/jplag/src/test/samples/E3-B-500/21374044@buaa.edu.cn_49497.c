"""
2022-03-27 14:50:33
AC
1.0
Accepted | 1 * (1 / 4) | 10 ms | 1708 KB
Accepted | 1 * (1 / 4) | 8 ms | 1548 KB
Accepted | 1 * (1 / 4) | 9 ms | 1700 KB
Accepted | 1 * (1 / 4) | 11 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
	int x , y=0;
	int n ;
	scanf("%d", &n );
	while(n--)
	{
		scanf("%d", &x );
		int n=1;
	    while(n<x)
	    {
		if(x%n==0)
		{
			y=y+n;
		}
		else
		{
			y=y;
		}
		n++;
	    }
	    if(y==n)
	    {
		printf("YES\n");
	    }
        else
		{
		printf("NO\n");
		}
		y=0;	
	}
	return 0;
}