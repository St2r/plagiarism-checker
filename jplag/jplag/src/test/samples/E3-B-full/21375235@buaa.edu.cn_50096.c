"""
2022-03-29 23:08:26
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 2 ms | 1732 KB

"""

#include<stdio.h>
 int main()
  {
   int n,a,b,i,j;
    scanf("%d",&n); 
	for(j=1;j<=n;j++)
	{
	 scanf("%d",&a); 
	 int sum=1; 
	 for(i=2;i<a;i++)
	 {
	  b=a%i;
	  if(b==0)
	  sum=sum+i; 
	   }
	   if(sum==a)
	   printf("YES\n"); 
	   else
	   printf("NO\n"); 
	    }
	    }