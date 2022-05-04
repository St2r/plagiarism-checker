"""
2022-03-29 23:51:04
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1684 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 1612 KB
Wrong Answer | 0 * (60 / 100) | 1 ms | 1604 KB

"""

#include <stdio.h>
int main()
{
	int n, i;
	double sum=1, temp=1;
	scanf("%d",&n);
	
	    if(1<n&&n<17)
	{
	    for(i=1;i<=n;i++)
	    {
	    	temp *= i;
	    	sum += 1.0 /temp;
		}
	    printf("%.14f",sum);
	}
	else
	    return 0;
	return 0;
}