"""
2022-03-27 17:37:23
AC
1.0
Accepted | 1 * (5 / 100) | 4 ms | 1704 KB
Accepted | 1 * (35 / 100) | 22 ms | 1480 KB
Accepted | 1 * (60 / 100) | 6 ms | 1700 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#define eps 1e-10
double factorial(double n) {
  double ans=1.0;
  int i;
  for(i=1; i<=n; i++) {
   ans=ans*i*1.0;
  }
  return ans;
 }
 int main() {
  double n;
  scanf("%lf",&n) ;
  double pi=2.0;
  double pi0=1.0;
  if(n>=30)
   n=30;
  for(int i=1; i<=n; i++) {
   pi=1.0/factorial(i);
   pi0+=pi;
   
   if(fabs(pi0-pi)<=eps)
    break;
  }
  printf("%.14lf\n",pi0);
  return 0;
}
//这里是同学给我讲的我原来的代码有点小问题