"""
2022-03-29 23:40:39
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1720 KB
Accepted | 1 * (4 / 10) | 0 ms | 1684 KB

"""

#include<stdio.h>
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