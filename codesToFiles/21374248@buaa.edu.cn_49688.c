"""
2022-03-26 23:40:58
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1632 KB

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
  double p=1.0,d=1.0,sum=0;
  while(i<=n){
  while(p<=i){
  	d*=p;
  	p++;
  }
  sum+=1/d;
  i++;
  }
  printf("%.14lf",1+sum);}
  return 0;
}