"""
2022-03-28 21:54:22
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (1 / 10) | 0 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (4 / 10) | 0 ms | 1692 KB

"""

#include<stdio.h>
int main()
{
	int m,n;
    double j=1;
	double sum=1.0;
	scanf("%d",&n);
	if(n<18)
	{
	    for(m=1;m<=n;m++)
    	{
		j=j*m;
		sum=sum+1.0/j;
	    }
    }
    else
    {
    	sum=2.71828182845905;
	}
	printf("%0.14lf",sum);
	return 0;
}