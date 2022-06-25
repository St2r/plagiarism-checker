"""
2022-03-27 00:08:37
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 8 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1672 KB
Accepted | 1 * (4 / 10) | 2 ms | 1644 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
	int n;
	scanf("%d",&n);
	double sum=1,a=1;
	if(n<17)
	{
	 for(int k=1;k<=n;k++)
	 {
	  a=a*k;	
	  sum+=1/a;
	 }
	 printf("%.14lf\n",sum);
    }
    else
    {
	 for(int k=1;k<=17;k++)
	 {
	  a=a*k;	
	  sum+=1/a;
	 }
	 printf("%.14lf\n",sum);
    }
	return 0;	
}