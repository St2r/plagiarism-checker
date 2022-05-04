"""
2022-03-29 11:34:25
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 0 ms | 1748 KB
Accepted | 1 * (60 / 100) | 3 ms | 1700 KB

"""

#include<stdio.h>

int main()
{
	int n, i, j, sum;
	

	int a[10001];
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++)        
    {
    	sum = 0;
		
    scanf("%d",&a[i]);
	  for(j=1;j<a[i];j++)
     	{
	   if(a[i]%j==0)
	   sum+=j;
     	}
    	if(a[i]==sum)
	    printf("YES\n");
	    else
	    printf("NO\n");	
	}
	
	
	return 0;
	
}