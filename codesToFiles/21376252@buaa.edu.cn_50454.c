"""
2022-03-29 22:55:06
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 0 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include<stdio.h>
long long int fac(int n);
int main(void)
{
  int n;
  scanf("%d",&n);
  if(n>=18)
  n=18;
  double t;
  int i,j,k;
  for(i=0;i<=n;i++)
  {
  	t=t+1.0/fac(i);
  }
  printf("%.14lf",t);
}
long long int fac(int n)
{
	long long int p=1;
	int i;
	for(i=1;i<=n;i++)
	p*=i;
	if(n==0)
	return 1;
	if(n!=0)
	return p;
}