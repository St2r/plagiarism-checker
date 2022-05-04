"""
2022-03-26 10:24:40
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 2 ms | 1596 KB
Accepted | 1 * (1 / 4) | 2 ms | 1612 KB
Accepted | 1 * (1 / 4) | 14 ms | 1652 KB

"""

#include<stdio.h>
int x,n;
int sum = 0; 
int main()
  {
    scanf("%d",&n);
	for(int j=1;j<=n;j++)
	{
	scanf("%d",&x);
    for(int i=1;i<x;i++) 
     {
      if(x%i == 0)
      {sum = sum + i;}
     }
	 if(sum == x)
	 printf("YES\n");
	 else
	 printf("NO\n");
	 }
    return 0;
  }