"""
2022-03-29 20:04:09
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include<stdio.h>
int main(void)
{
 int n,i;
 scanf("%d",&n);
 double sum=1,fenmu=1;
 for (i=1; i<=n&&i<=100;i++){
  fenmu*=i;
  sum+=(1.0/fenmu);
 }
 printf("%.14f",sum);
 
 return 0;
}