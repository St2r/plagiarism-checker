"""
2022-03-28 20:32:23
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 0 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include <stdio.h>
int main(){
 int n,i=1;
 double e,trm=1,sum=0;
 scanf("%d",&n);
 if(n>17){
  n=17;
 }
 while(i<=n){
  /*if(1/trm>=1e-14){*/
   trm=trm*i;
  sum=sum+1/trm;
  /*}*/ 
  i++;
 }
 e=1+sum;
 printf("%.14f",e);
 return 0;
}