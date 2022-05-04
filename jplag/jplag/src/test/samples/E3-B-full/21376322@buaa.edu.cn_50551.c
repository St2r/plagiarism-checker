"""
2022-03-27 17:19:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1616 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 3 ms | 1568 KB

B

"""

#include <stdio.h>

int main() {
 int n,i=0,j=0,m,b,c;
 scanf("%d\n",&n);
 int a[n-1];
 for(i=0;i<n;++i){
  scanf("%d",&a[i]);
 }
 while(j<n){
  b=1,m=0;
  while(b<a[j]){
   c=a[j]%b;
   if(c==0){
    m=m+b;
    b=b+1;
   }
   else
   b=b+1;
  }
  if(m==a[j])
  printf("YES\n");
  else
  printf("NO\n");
  j=j+1;
 }
 
 return 0;
}