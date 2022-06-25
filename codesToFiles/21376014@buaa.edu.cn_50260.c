"""
2022-03-29 22:30:52
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1716 KB
Accepted | 1 * (4 / 10) | 0 ms | 1660 KB

"""

#include <stdio.h>
int main ()
{
	 double sum=1,b=1.0;
	 int n,i,j;
	 scanf("%d",&n);
	 if(n>=19){
	  n=19;
		 }
			 for(i=1;i<=n;i++){
			  b=1.0;
			  for(j=1;j<=i;j++){
			   b*=j;
		  }
	   sum+=1.0/b;
	 }
 printf("%.14lf",sum);
 return 0;
 }