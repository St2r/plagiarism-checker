"""
2022-03-29 22:48:44
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 2176 KB
Accepted | 1 * (35 / 100) | 0 ms | 2096 KB
Accepted | 1 * (60 / 100) | 1 ms | 2016 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){int n,i=1,k,sum;
int x[10005]={0},t;
scanf("%d\n",&n);
    while(i<=n){
     scanf("%d",&x[i]);
     i++;
 }
 i=1;
 while(i<=n){
  t=1;
  sum=0;
  k=(int)sqrt(x[i]);
  while(t<=k){
   if(x[i]%t==0){
    sum=sum+t+x[i]/t;
   }
   t++;
      }
        if(k*k==x[i]){
         sum=sum-k;
  }
  if(sum==x[i]*2){
   printf("YES\n");
  }else{
   printf("NO\n");
  }
  i++; 
  }
 return 0;
}