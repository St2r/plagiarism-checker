"""
2022-03-30 15:21:21
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include <stdio.h>
 int n,y,z;
 int main()
 {
 	scanf ("%d", &n);
 	for(int i = 1;i<=n;i++)
 	{
 		scanf("%d",&y);
 		z = 0;
		 for(int j = 1; j<y;j++)
		 {
		 	if(y % j == 0)
		 	{
		 		z+=j;
			 }
		
		  } 
		  if (z == y)
		  printf ("YES\n");
		  else 
		  printf ("NO\n");
		  
	 }
	 return 0;
 }