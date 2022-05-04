"""
2022-03-27 21:44:30
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include <stdio.h>

int main()
{
	int n,a,c;
	scanf("%d",&n);
	int i=1,j=1;
	for(i=1;i<=n;i++) 
	{	
		c=0;
		scanf("%d",&a);
	    j=1;
			for(j=1;j<a;j++)
	    	{
				if(a%j==0)
		   	   {
				c+=j;
			   }
      		}
	
	if(c==a)
	printf("YES\n");
	else
	printf("NO\n");
	}

     return 0;
}