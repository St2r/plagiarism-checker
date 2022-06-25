"""
2022-03-28 21:04:30
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
int main(){
 int n;
 double i,t=1,sum=1;
 scanf("%d",&n);
 if (n>40) n=40;
 for(i=1;i<=n;i++){
  t=t*i;
 sum=sum+(1/t);}
 printf("%.14lf",sum);
 return 0;
}