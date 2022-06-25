"""
2022-03-26 14:09:24
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 6 ms | 1620 KB
Accepted | 1 * (2 / 10) | 6 ms | 1620 KB
Accepted | 1 * (2 / 10) | 3 ms | 1660 KB
Accepted | 1 * (4 / 10) | 8 ms | 1732 KB

"""

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
 int n,a[10001];
 a[0]=1;
 double sum=1;
 scanf("%d", &n);
 for(int i=1;i<=18;i++)
   { 
   	 a[i]=a[i-1]*i;
   	 sum=sum+1/(1.0*a[i]);
   	 if(n==i)
   	 break;
   }
printf("%.14lf", sum);
  


return 0;
}