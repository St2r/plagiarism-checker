"""
2022-03-26 13:19:38
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1724 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
   double n=0,i,sum=1,j=1;
   scanf("%lf",&n);
   for(i=1;i<=n;i++)
   {
   	j=j/i;
   	sum=sum+j;
    if(i>=17)
    break;
	}
   	printf("%.14lf",sum);
	return 0;
}