"""
2022-03-26 11:14:16
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1596 KB
Accepted | 1 * (35 / 100) | 12 ms | 1600 KB
Accepted | 1 * (60 / 100) | 16 ms | 1532 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int a[n];
	int i;
	for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
	
	
	for(i=1;i<=n;i++)
	{
	    
	    int j,sum=0;
	    for(j=1;j<a[i];j++)
	    {
	        if(a[i]%j==0)
	        {
			   sum=sum+j;
		    }	
        }
        if(sum==a[i])
	           printf("YES\n")	;
	        else
	           printf("NO\n");
        
    }    
	   
	return 0;
}