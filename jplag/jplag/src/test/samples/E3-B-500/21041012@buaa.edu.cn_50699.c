"""
2022-03-29 20:39:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1556 KB
Accepted | 1 * (35 / 100) | 3 ms | 1712 KB
Accepted | 1 * (60 / 100) | 3 ms | 1712 KB

"""

#include <stdio.h>
int  main()
{
	int n,a=0,i,j;
	int  c[10000];
	scanf("%d",&n);
 


   for(i=0;i<n;i++)
{
		scanf("%d",&c[i]);
	

   for(j=1;j<=c[i]/2;j++)
	{
		if(c[i]%j==0)
     a=j+a;
	 else
	 a=a; }

	 
	  if(a==c[i])
	 printf("YES\n");
	 else
	 printf("NO\n");
	 a=0;
	 }
	 
	 return 0;
}