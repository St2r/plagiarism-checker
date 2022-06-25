"""
2022-03-28 23:03:40
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
	 int n,i=1,h=1;
	 double e=1,a=1;
	 scanf("%d",&n);
	 while(i<=n)
	 {
	 	while(h<=i)
	 	{
	 		a=a/h;
	 		h++;	
		 }
		 e=e+a;
		 if(e>=2.718281828459045) break;
		 h=1;
		 a=1;
		 i++;
	 		
	 }
	 
	 printf("%.14lf",e);
	
	return 0;
}