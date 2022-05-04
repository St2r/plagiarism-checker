"""
2022-03-29 00:39:59
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 3 ms | 1572 KB

"""

#include<stdio.h>
#include <ctype.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int n,a[10000],i=0,j=1,s=0;
int main() 
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{   
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		s=0;
		for(int j=1;j<a[i];j++)
	    {
	    	if(a[i]%j==0)
		       s=s+j;
	    }
    	if(a[i]==s)
    	    printf("YES\n");
    	else
    		printf("NO\n");
	}
	
	return 0;
}