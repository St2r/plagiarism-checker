"""
2022-03-29 19:57:34
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1624 KB

"""

#include <stdio.h>
int main()
{
    int n,x,i,y,sum=0;
    scanf("%d\n",&n);
    
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&x);

    	for(y=1;y<x;y++)
    	{
    		if(x%y==0) 
			{sum=sum+y;	
			}	
		}
		if(x==sum)
		{printf("YES\n");
		sum=0; 
		}
		else
		{printf("NO\n");
		sum=0;
		}
	}	
	return 0;
}