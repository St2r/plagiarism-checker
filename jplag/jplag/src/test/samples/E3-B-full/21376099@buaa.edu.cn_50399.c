"""
2022-03-29 21:20:34
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1584 KB
Accepted | 1 * (60 / 100) | 2 ms | 1732 KB

"""

#include <stdio.h> 
int main ()
{
  int n,a;
  
  scanf ("%d",&n);
  while(n--)
  {int s=0;
  
  scanf ("%d",&a);
  
  for( int i=1;i<=a-1;i++)
    {
  	if(a%i==0)
  	 s=s+i;
  	}
  if(s==a)
  printf("YES\n");
  else
  printf("NO\n");
  }
  
  return 0;
 }