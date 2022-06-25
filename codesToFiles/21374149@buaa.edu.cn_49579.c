"""
2022-03-28 23:20:30
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1728 KB

"""

#include<stdio.h>
int main(){
int n=0;
double x=1,sum = 1;

scanf("%d",&n);

int d=100;
if (n<d)
{
  for (int j = 0; j < n; j++)
  {
   for (int i = n-j; i>1; i--)
  {
    x = x * i;  
  }
    sum = 1.0/x + sum;
    x = 1;
  }
  printf("%.14lf",sum);
}
else
    {
  for (int j = 0; j < d; j++)
  {
   for (int i = d-j; i>1; i--)
  {
    x = x * i;  
  }
    sum = 1.0/x + sum;
    x = 1;
  }
  printf("%.14lf",sum);
}

  return 0;
}