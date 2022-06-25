"""
2022-03-29 23:55:20
TLE
0.4
Accepted | 1 * (1 / 10) | 0 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1684 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>
 int main()
  { int n,i,k;
   unsigned long long c;
    double sum=0; 
	scanf("%d",&n); 
	if(n>=100000){n=100000;}
	 for(i=1;i<=n;i++)
	  { k=1;
	   for(c=1;c<=i;c++) 
	   { k=k*c;
	    } 
		sum=sum+1.0*1/k; } 
		printf("%.14lf",sum+1);
		 return 0;
		  }