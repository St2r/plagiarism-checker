"""
2022-03-27 23:49:14
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1600 KB
Accepted | 1 * (1 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1596 KB
Accepted | 1 * (2 / 10) | 3 ms | 1596 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include<stdio.h>
int main()
{
	long long a=1,n;
	int i;
    double k=0,m;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		if(n<=50)
	  {
		n=n;
		a=a*i;
		m=1.0*1/a;
		k=k+m;	
	  }
	  else
	  {
	  	n=50;
	  	a=a*i;
		m=1.0*1/a;
		k=k+m;
	  }
		
	}
	printf("%.14f",k+1);
	return 0;
	
}