"""
2022-03-27 17:04:07
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1576 KB
Accepted | 1 * (1 / 4) | 2 ms | 1532 KB
Accepted | 1 * (1 / 4) | 3 ms | 1576 KB
Accepted | 1 * (1 / 4) | 3 ms | 1632 KB
B

"""

#include<stdio.h>
int main()
{ int n,s=1;
 float s1,e=0;
 scanf("%d\n",&n);
 for(int i=1;i<n;i++)
 {
  for(int j=1;j<n;j++)
  {
  	s*=j;
	  }	
 	s1=1/s;
 	if (s1>=0.00000000000001) 
 	e+=s1;
 }
	printf("%.14f",e);
	return 0;
}