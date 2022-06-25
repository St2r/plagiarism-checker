"""
2022-03-29 21:21:13
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>

int main()
{
  int i,j,n;
  long long b;
  double d=1;
  scanf("%d",&n);
  if(n>=18){
  n=18;
  }
  else{
  n=n;
  }
  for(i=1;i<=n;i++){
  for(j=1;j<=i;j++){
  b*=j;
  }
  d+=1.00/b;
  b=1;
  }
  printf("%.14lf",d);
  
  return 0;
}