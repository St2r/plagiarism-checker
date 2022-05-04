"""
2022-03-26 13:58:42
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1712 KB
Accepted | 1 * (35 / 100) | 2 ms | 1712 KB
Accepted | 1 * (60 / 100) | 2 ms | 1704 KB

"""

#include <stdio.h>
int main()
{
 int n,x,a,b;
 scanf("%d",&n);
 int i,j;
 for(i=0;i<n;i++){
  int x;
  scanf("%d",&x);
  int a[300]={0},b=0;
  for(j=1;j*j<=x;j++){
  	if(j==1){
  		a[0]=1;
  		b++;
  		continue;}
	  
   
   if((x%j)==0){
    a[b]=j;
    a[b+1]=x/j;
   
    b+=2; 
   }
  }
  int sum=0;
  for(j=0;j<b;j++){
   sum+=a[j];
  }
  printf((sum==x)?"YES\n":"NO\n"); 
 }
 return 0;
}