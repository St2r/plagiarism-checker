"""
2022-03-29 13:39:21
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 2 ms | 1692 KB

"""

#include <stdio.h>

int main()
{
	int n;
	
	scanf("%d",&n);
	
	int i=1,m=1,s=0;
	
	while(i<=n)
	{
		int a;
		
		scanf("%d",&a);
		
		while(m<=(a/2))
		{
			if((a%m)==0)
			{
				s=s+m;
			}
			
			m++;
		}
		if(s==a)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		i++;
		
		s=0;
		
		m=1;
	}
	
	return 0;
}