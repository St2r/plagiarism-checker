"""
2022-03-28 21:10:12
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
   long long n;
   scanf("%lld",&n);
   if(n>17)
   printf("2.71828182845905");
   if(n<=17){
   int i=1;
   double p=1.0,d=1.0,e=0;
   while(i<=n){
   while(p<=i){
    	d*=p;
    	p++;
  }
    e+=1/d;
    i++;
  }
     printf("%.14lf",1+e);
	 }
     return 0;
}