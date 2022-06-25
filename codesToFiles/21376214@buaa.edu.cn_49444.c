"""
2022-03-26 13:46:16
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1672 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
	int n;
    
	double a,e=1,j;
	scanf("%d",&n);
	if(n>17)
	e=2.71828182845905;
	else{
	
	for(int i=1;i<=n;i++)
	{
		for(a=1,j=i;j>0;j--)
	    {
		   a=a*j;
	    }
	    e=e+1/a;
	    
	}
	}
	printf("%.14lf\n",e);

	return 0;
	
}