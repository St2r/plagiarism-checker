"""
2022-03-29 23:10:25
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1744 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 2 ms | 1692 KB

"""

#include <stdio.h>
int main()
{
  int n,i,sum=0,a[n],x;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  i=0;
  while(i<n) 
  { sum=0;
    for(x=1;x<a[i];x++)
	{
  	  if(a[i]%x==0)
  	  sum+=x;

  	}
  	
	  if(sum==a[i])
  	  printf("YES\n");
  	  else
  	  printf("NO\n");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
  	  i++;
  }
  	
	  return 0;
  }