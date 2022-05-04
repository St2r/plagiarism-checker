"""
2022-03-26 17:23:55
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1664 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include <stdio.h>

int main()
{
	int n,a[100]={0},i,j,sum=0;
 	scanf("%d",&n);  
    for (i=0;i<n;i++)
		scanf("%d",&a[i]); 
	for (i=0;i<n;i++)
	{
		sum=0;
		for(j=1;j<=a[i]/2;j++)
		{
			if(a[i]%j==0)
				sum+=j;

		}	
		if(sum==a[i])
			printf("YES\n");
		else
			printf("NO\n");	
		
	}
	return 0;
}