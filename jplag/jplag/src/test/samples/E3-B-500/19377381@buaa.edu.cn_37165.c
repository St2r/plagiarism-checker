"""
2022-03-29 22:52:14
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 2 ms | 1624 KB

"""

#include <stdio.h>

int main()
{
  int i,n,a,b;
  scanf("%d",&n);
  for(i=0;i<n;i++) { 
  int c=0;
  scanf("%d",&a);
  for(b=1;b<=a;b++){
  if(a%b==0){
  c=c+b;
  }
  }
  if(c-a==a){
  printf("YES\n");
  }
  else {
  printf("NO\n");
  }
  }
  return 0;
}