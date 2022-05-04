"""
2022-03-26 18:01:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include <stdio.h>
int main(){
 int n,i,s=0,j=1,a[200];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++){
  for(j=1;j<a[i];j++){
   if(a[i]%j==0) {
   s+=j;
   }
  }
  if(s==a[i]){
   printf("YES\n");
  }
  else
  {
  	printf("NO\n");
  }
  s=0;
 } 
}