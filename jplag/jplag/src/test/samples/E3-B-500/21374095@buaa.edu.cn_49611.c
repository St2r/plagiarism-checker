"""
2022-03-28 23:50:12
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1728 KB

"""

#include<stdio.h>

int main()
{
	int i,j,n,x,s;
 	scanf("%d",&n);
 	if(x==1)
 	printf("NO\n");
 	else
 	{
 	for(i=1;i<=n;i++)
 	{
  	scanf("%d",&x);
 	for (s=0,j=1;j<x;j++)
 	{
 	if (x%j==0) 
 	s+=j;
	}
	if (s==x) 
	printf("YES\n");
 	else printf("NO\n");
	}	
	}
	return 0;
}