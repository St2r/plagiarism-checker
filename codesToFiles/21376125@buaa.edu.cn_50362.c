"""
2022-03-27 23:24:46
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1688 KB
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	double sum=1.0;
	double m=1.0;

    if(n<20)
    {
    	for(i=1;i<=n;i++)
	  {
		m=m*i;
		sum=sum+1/m;
	  }
	  printf("%.14lf\n",sum);
	}
    else
	{
	  	for(i=1;i<=20;i++)
	  {
		m=m*i;
		sum=sum+1/m;
	  }
	  printf("%.14lf\n",sum);
	}
	  return 0;
}