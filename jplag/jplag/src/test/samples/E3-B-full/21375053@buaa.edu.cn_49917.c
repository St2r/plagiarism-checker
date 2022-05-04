"""
2022-03-29 23:59:30
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1668 KB
Accepted | 1 * (60 / 100) | 2 ms | 1572 KB

"""

#include<stdio.h>
 #include<math.h> 
 int main() 
 { int n,i,j,sum; 
 int a[1030],b[5030]; 
 scanf("%d",&n);
  for(i=1;i<=n;i++) 
  { sum=0; 
  scanf("%d",&a[i]); 
  for(j=1;j<a[i];j++) 
  { if(a[i]%j==0)
   { sum=sum+j; } 
   } 
   if(sum==a[i]) 
   {printf("YES\n");}
    else{printf("NO\n");}
	 } 
	 return 0;
	  }