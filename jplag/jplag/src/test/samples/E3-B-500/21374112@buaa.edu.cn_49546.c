"""
2022-03-29 22:04:25
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 2 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	int x[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
     {
     	scanf("%d",&x[i]);
     	
	 }
	 for(i=0;i<n;i++)
	 {
     int a,c,b=0;
	 	for(a=1;a<x[i];a++)
	 	{
	 		c=x[i]%a;
		 if(c==0)
		{
		 	b=b+a;
		}
	
		}
		if(x[i]!=b)
		printf("NO\n");
		else
		printf("YES\n");					
	 }
	 return 0;
}