"""
2022-03-26 13:45:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1736 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""


#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h> 
//第三次练习赛
//求e的近似值 
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