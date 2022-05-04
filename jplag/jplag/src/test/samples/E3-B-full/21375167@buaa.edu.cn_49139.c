"""
2022-03-29 23:22:08
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1696 KB
Accepted | 1 * (35 / 100) | 1 ms | 1744 KB
Accepted | 1 * (60 / 100) | 2 ms | 1668 KB

"""

#include <stdio.h>
int main()
{
 int n,i,q,k,y,sum=0;
 scanf("%d\n",&n);
 int x[999];
 for(i=1;i<=n;i++){
  scanf("%d",&x[i]);
 }
 for(i=1;i<=n;i++){
  y=x[i];
  for(q=1;q<y;q++){
   k=y%q;
   if(k==0){
   sum+=q;
  }
  }
  if(sum==x[i]){
   printf("YES\n");
   }else{
    printf("NO\n");
   }
   sum=0;
  }
  return 0;
}