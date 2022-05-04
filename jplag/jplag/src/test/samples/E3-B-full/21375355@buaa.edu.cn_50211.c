"""
2022-03-29 22:33:31
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1568 KB

"""

#include<stdio.h> 
int main() 
{ 
   int n; 
   int x; 
   int i,j; 
   int m; 
   scanf("%d",&n); 
   for(i=0;i<n;i++){ 
      scanf("%d",&x); 
	  m=x; 
	  for(j=1;j<x;j++){  
	    if(x%j==0){ 
		m=m-j; } } 
		if(m==0){ 
		printf("YES\n"); } 
		else{ 
		printf("NO\n"); } } 
	return 0; 
}