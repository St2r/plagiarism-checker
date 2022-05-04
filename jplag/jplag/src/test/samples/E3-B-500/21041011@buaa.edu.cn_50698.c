"""
2022-03-28 23:37:47
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1568 KB
Accepted | 1 * (60 / 100) | 3 ms | 1732 KB

"""

#include <stdio.h> 

int main()
{
	int n,a;
	
	int i=1;
	
	int m;
	
	int w;
	
	scanf("%d",&n);
	
	while(i<=n)
	{
		w=0;
		
		scanf("%d",&a);
		
		for(m=1;m<a;m++)
		{
			if(a%m==0)
			{
				w=w+m;
			}
		}
		if(w==a)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}	
	i++;
	}
	
	return 0;
}