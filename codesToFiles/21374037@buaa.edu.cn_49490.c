"""
2022-03-27 14:00:06
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1636 KB
Accepted | 1 * (35 / 100) | 3 ms | 1688 KB
Accepted | 1 * (60 / 100) | 4 ms | 1712 KB

"""

#include <stdio.h>
int main()
{
	long long n,i=0,s,num;
	double e=1,p;
	scanf("%lld",&n);
	if(n>0)
	{
		if(n>=34)
	    {
		    for(i=1;i<=33;i++)
	        {
		        num=1;
			    for(s=1;s<=i;s++)
		        {
				    num=num*s;
		        }
		        p=1/(num*1.0);
		        e=e+p;
	        }
	    }
	    else
	    {
		    for(i=1;i<=n;i++)
		    {
			    num=1;
			    for(s=1;s<=i;s++)
			    {
				    num=num*s;
		        }
		        p=1/(num*1.0);
			    e=e+p;
		    }
	    }
	    printf("%.14lf",e);
	}
	return 0;
}