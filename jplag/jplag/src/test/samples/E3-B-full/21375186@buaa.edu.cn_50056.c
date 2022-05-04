"""
2022-03-29 19:15:17
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1592 KB
Accepted | 1 * (35 / 100) | 1 ms | 1672 KB
Accepted | 1 * (60 / 100) | 1 ms | 1668 KB

"""

#include<stdio.h>

int wan(int x){
 int sum=0; 
 for(int i=1;i*i<=x;i++){
  if(x%i==0){
   if(x/i==i) sum+=i;
   else sum+=(i+x/i);
  }
 }
 if(sum==2*x) return 1;
 else return 0;
}

int main()
{
 int n,x[10000];
 scanf("%d",&n);
 for(int i=0;i<n;i++){
  scanf("%d",&x[i]);
  if(wan(x[i])) printf("YES\n");
  else printf("NO\n");
 }
 return 0;
}