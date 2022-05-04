"""
2022-03-27 09:20:52
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main()
{
  int n,x[500],i=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&x[i]);
  }
  int j=0;
  for(i=0;i<n;i++)
  {
  	int sum=0;
  	for(j=1;j<x[i]-1;j++)
  	{
  		if(x[i]%j==0)
  		{
  			sum+=j;
		  }
	  }
	  if(sum==x[i])
	  {
	  	printf("YES\n");
	  }
	  else
	  {
	  	printf("NO\n");
	  }
  }
  
  
	  
   
    return 0;
}