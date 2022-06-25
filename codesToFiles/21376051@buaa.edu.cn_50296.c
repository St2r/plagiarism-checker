"""
2022-03-27 13:27:49
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1688 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int n,eps=1e-14;
    scanf("%d",&n);
    double exu=1,i=1,r=1;
    for(i=1;i<=n;i++)
    {
    	r*=i;
    	exu+=1.0/r;
    	if(i>20)  break;
	}
	printf("%.14lf\n",exu);
  
   
    return 0;
}