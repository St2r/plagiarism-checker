"""
2022-03-26 22:34:18
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB
Accepted | 1 * (1 / 4) | 2 ms | 1616 KB
Accepted | 1 * (1 / 4) | 6 ms | 1664 KB
Accepted | 1 * (1 / 4) | 2 ms | 1704 KB
B


"""

#include<stdio.h>
int main()
{
  int n,x;
  scanf("%d",&n);
  int i=0,b=1,sum=0;
  while(i<n){
  scanf("%d",&x);
  while(b<x-1){
  if(x%b==0)
  sum+=b;
  b++;}
  if(sum==x)
  printf("YES\n");
  else
  printf("NO\n");
  i++;
  }
  return 0;
  }