"""
2022-03-29 20:33:23
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h> 
long long int fac(int n);
int main(void)
{
  int n;
  scanf("%d",&n);
  if(n>=18)
  n=18;
  double an;
  int i,j,k;
  for(i=0;i<=n;i++)
  {
  	an=an+1.0/fac(i);
  }
  printf("%.14lf",an);
}
long long int fac(int n)
{
	long long int a=1;
	int i;
	for(i=1;i<=n;i++)
	a=a*i;
	if(n==0)
	return 1;
	if(n!=0)
	return a;
}