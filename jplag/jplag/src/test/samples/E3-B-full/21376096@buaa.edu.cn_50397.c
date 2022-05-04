"""
2022-03-29 21:54:44
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 2 ms | 1576 KB

"""

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define PI acos(-1)
#define eps 1e-8
int main() {
 int n,x[10001];
 scanf("%d",&n);
 int i,m,sum;
 for(i=0; i<n; i++) {
  scanf("%d",&x[i]);}
  for(i=0; i<n; i++){
  
  sum=0;
  for(m=1; m<x[i]; m++) {
   if((x[i]%m)==0) {
    sum+=m;
   }
  }
  if (x[i]==sum) printf("YES\n");
  else printf("NO\n");
  
 }
 return 0;
}