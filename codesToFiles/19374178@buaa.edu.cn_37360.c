"""
2022-03-27 16:08:58
WA
0.25
Wrong Answer | 0 * (1 / 4) | 10 ms | 1628 KB
Wrong Answer | 0 * (1 / 4) | 10 ms | 1628 KB
Wrong Answer | 0 * (1 / 4) | 2 ms | 1696 KB
Accepted | 1 * (1 / 4) | 2 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
 int i, j, n;
 double item, sum;
 sum=1;
 scanf("%d", &n);
 for(i=1; i<=n; i++){
  item=1;
  for(j=1; j<=i; j++){
   item=item*j;
  }
  item=1.0/item;
  sum=sum+item;
 }
 printf("%.14f", sum);
 
 return 0;
}