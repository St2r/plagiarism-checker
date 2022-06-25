"""
2022-03-29 22:03:52
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 0 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>
 int main()
  {
   int n,i;
    double sum=1,m=1;
	 scanf("%d",&n); 
	 for(i=1;i<=n;i++) 
	 {
	  m*=i; sum+=1.0/m;
	  } 
	  printf("%.14f",sum);
	   return 0;
 }