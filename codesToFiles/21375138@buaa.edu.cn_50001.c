"""
2022-03-29 23:37:45
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1624 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
double fac(double n){
 double a=1.0;
 for(double i=n;i>0;i--){
  a*=i;
 }
 return a;
}
int main()
{
 int n;
 scanf("%d",&n);
 double e=1.0;
 
 if(n<=1000)
{
 for(double i=1.0;i<=n;i++){
  
  
  e+=1.0/fac(i);
 }


 printf("%.14f",e);
}
if(n>1000)
{
printf("2.71828182845905");
} 
return 0;
}