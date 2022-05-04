"""
2022-03-26 19:19:42
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1556 KB
Accepted | 1 * (35 / 100) | 3 ms | 1720 KB
Accepted | 1 * (60 / 100) | 3 ms | 1608 KB

"""

#include <stdio.h>
int  main()
{
	int n,daan=0,i,j;
	int  c[10000];
	scanf("%d",&n);
 


   for(i=0;i<n;i++)
{
		scanf("%d",&c[i]);
	

   for(j=1;j<=c[i]/2;j++)
	{
		if(c[i]%j==0)
     daan=j+daan;
	 else
	 daan=0+daan; }

	 
	  if(daan==c[i])
	 printf("YES\n");
	 else
	 printf("NO\n");
	 daan=0;
	 }



}