"""
2022-03-28 23:57:24
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 2 ms | 1656 KB

"""

#include <stdio.h>

int main()
{
	int a[100];
	int m,n,x,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {		
		m=0;
		for(x=1;x<=a[i]/2;x++)
		{
			if(a[i]%x==0)
			{
				m=m+x;
			};
		}
		
		if(a[i]==m)
		{
			printf("YES\n");
		}
		
		else
		{
			printf("NO\n");
		};
    }
	
	return 0;
}