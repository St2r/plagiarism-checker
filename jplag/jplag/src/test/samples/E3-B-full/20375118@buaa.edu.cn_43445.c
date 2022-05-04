"""
2022-03-29 17:04:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 4 ms | 1552 KB

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