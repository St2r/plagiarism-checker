"""
2022-03-29 23:58:14
WA
0.1
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Wrong Answer | 0 * (1 / 10) | 0 ms | 1660 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1692 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1740 KB
Wrong Answer | 0 * (4 / 10) | 1 ms | 1656 KB

"""

# include <stdio.h>

int main()
{
	int n,i,x=1;
	scanf ("%d",&n);
	double sum=1,y;
	for(i=1;i<=n;i++)
	{
		x=x*i;
		y=1/x;
		sum=sum+y;
		if (y<1e-14)
		{
			break;
		 } 
	}
	printf ("%.14lf",sum);
	
    return 0;
}