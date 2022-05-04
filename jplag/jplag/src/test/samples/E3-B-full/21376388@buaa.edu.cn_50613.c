"""
2022-03-27 10:42:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 11 ms | 1704 KB
Accepted | 1 * (60 / 100) | 21 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int i,n,x[10000],a,sum,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&x[i]);
    }   
	for(a=1;a<=n;a++)
	    {   
			  for(b=1,sum=0;b<=x[a];b++)  
			   {
			   if(x[a]%b==0)
			      sum=sum+b;
	           }
	if(sum==x[a]*2)
	   printf("YES\n");
	else
	   printf("NO\n");
        
		}
	return 0;	
 }