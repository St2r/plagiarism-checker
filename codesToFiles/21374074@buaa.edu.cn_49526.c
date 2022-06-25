"""
2022-03-29 17:26:17
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
int main(){
 int i,n;
 double r,sum;
 scanf("%d",&n);
 if(n<=17)
 for(r=i=1;i<=n;i++){
  r*=i;
  sum+=(1.0/r); }
  else for(r=i=1;i<=17;i++){
  r*=i;
  sum+=(1.0/r); }
  printf("%.14f",sum+1);
  return 0;
 
 
}