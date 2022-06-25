"""
2022-03-29 20:10:07
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

# include <stdio.h> 
int main() 
{ 
	int n,i,j;
 	double sum,a; 
 sum=1.0; scanf("%d",&n);
  for(i=1;i<=n&&i<=17;i++) {
   a=1.0; 
   for(j=1;j<=i;j++) { 
   a=a*j; 
   } 
   sum=sum+1/a;
    }
	 printf("%.14lf",sum);
	 return 0;
	  }