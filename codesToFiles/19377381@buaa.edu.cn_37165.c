"""
2022-03-29 22:46:44
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1664 KB

"""

#include <stdio.h>

int main()
{
  int a,b,n;
  long long c;
  double d=1;
  scanf("%d",&n);
  if(n>=17){
  n=17;
  }
  else{
  n=n;
  }
  for(a=1;a<=n;a++){
  for(b=1;b<=a;b++){
  c*=b;
  }
  d+=1.00/c;
  c=1;
  }
  printf("%.14lf",d);
  
  return 0;
}