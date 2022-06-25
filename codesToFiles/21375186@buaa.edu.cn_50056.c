"""
2022-03-29 19:53:37
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 0 ms | 1656 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>

double jie(double n){
 double sum=1;
 for(double i=2;i<=n;i++){
  sum*=i;
 }
 return sum;
}

int main()
{
 double n,e=2;
 scanf("%lf",&n);
 for(double i=2;i<=n;i++){
  e+=(1/jie(i));
 }
 printf("%.14lf",e);
 return 0;
}