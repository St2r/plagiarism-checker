"""
2022-03-28 23:21:13
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 0 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include <stdio.h>
#include<math.h>
 
 int main()
 {
 	int s=0,m,n;
 	scanf("%d",&n);
 	for(int i=0;i<n;i++)
 	{ 
 	  scanf("%d",&m);
 	  for(int j = 1 ; j < m ; j++)
	   {
	   	if(m%j==0)
           s=j+s;  
		}
		if(s==m)
		{
		printf("YES\n")	;
		}
		else
		printf("NO\n");
		s=0;
	 }
 	
 	return 0;
 }