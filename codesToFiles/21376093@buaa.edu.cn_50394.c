"""
2022-03-28 23:23:32
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1720 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include<stdio.h>
int main()
{
 double e = 2;
 long long i = 1, n, k = 1, s = 1;
 scanf("%lld",&n);
 if(n < 18){
  for(i = 1; i < n; i++){
   k++;
   s = s * k ;
   e = e + (double) 1 / s ;
   }
   printf("%.14f\n",e);
 }
else
    printf("2.71828182845905");
   return 0;
}