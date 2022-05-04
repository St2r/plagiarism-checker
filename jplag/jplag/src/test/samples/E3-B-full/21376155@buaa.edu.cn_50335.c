"""
2022-03-29 20:44:54
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 0 ms | 1680 KB
Accepted | 1 * (60 / 100) | 2 ms | 1688 KB

"""

#include<stdio.h>

int main()
{
    int n,a[120];
    scanf("%d",&n);
    
    for (int i=1; i<=n; i++)
    {
    	scanf("%d",&a[i]);
	}
    
    for (int j=1; j<=n; j++)
    {
    	int b=0;
    	
    	for (int m=1; m<a[j]; m++)
    	{
    		if (a[j]%m==0)
    		{
				b += m;
    	    }
        }
		if (b==a[j])
        printf("YES\n");
   	   	else			
		printf("NO\n");      		
	}
    
    return 0;
}