"""
2022-03-29 08:07:05
AC
1.0
Accepted | 1 * (1 / 10) | 12 ms | 1680 KB
Accepted | 1 * (1 / 10) | 4 ms | 1656 KB
Accepted | 1 * (2 / 10) | 12 ms | 1664 KB
Accepted | 1 * (2 / 10) | 4 ms | 1652 KB
Accepted | 1 * (4 / 10) | 12 ms | 1700 KB

"""

#include <stdio.h> 
#include<math.h> 
int main() 
{ 	
	double sum=1.0; 	
	int n; 
	double m=1.0;
	scanf("%d",&n); 	 	
	for(int i=1;i<=n;i++) 	
	{ 		for(int j=i; j>=1;j--) 		{ 	
			 m=m*j; 	
			 	 } 	
			 	 	 if(m>1e+15) 		 { 		 
			 	 	 		printf("%.14lf",sum); 		 	return 0; 		 } 		sum=sum+1.0/m; 		m=1; 		 		 	 } 	 printf("%.14lf",sum); 	 	 	return 0; }