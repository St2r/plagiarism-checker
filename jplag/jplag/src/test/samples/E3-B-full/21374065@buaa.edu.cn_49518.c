"""
2022-03-29 22:05:38
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 2 ms | 1580 KB

"""

#include<stdio.h>
void f(int a){
 int s=0;
 for(int i=1;i<=a-1;i++){
  if(a%i==0){
   s+=i;
  }
 }
 if(s==a){
  printf("YES\n");
 }
 else printf("NO\n");
 }
int main()
{
int n,x[100];
scanf("%d",&n);
for(int i=0;i<n;i++){
 scanf("%d",&x[i]);
 f(x[i]);
}
    return 0;
}