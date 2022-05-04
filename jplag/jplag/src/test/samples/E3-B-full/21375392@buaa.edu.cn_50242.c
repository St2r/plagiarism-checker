"""
2022-03-28 16:15:05
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1620 KB
Accepted | 1 * (35 / 100) | 3 ms | 1620 KB
Accepted | 1 * (60 / 100) | 4 ms | 1664 KB

"""

#include <stdio.h>
 int main() 
 { 
 int i,j,n,a,sum;
  scanf("%d",&a);
   for(j=1;j<=a;j++) {
    scanf("%d",&n); 
	sum=0; 
	for(i=1;i<n;i++) 
	if (n%i==0)
	 { 
	  sum=i+sum; 
	  } if(sum==n) 
	  printf("YES\n"); 
	  else printf("NO\n");
	   } 
	return 0; 
}