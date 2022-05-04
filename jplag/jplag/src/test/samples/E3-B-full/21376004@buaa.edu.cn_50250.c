"""
2022-03-30 17:29:40
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 0 ms | 1692 KB
Accepted | 1 * (60 / 100) | 3 ms | 1664 KB

"""

#include<stdio.h>

int main()
{
	int n,a,sum ;
	int j;
	
	scanf("%d",&n);
	
	while(n--)
	{
		scanf("%d", &a);
		sum=0;
		for(j=1; j<a ;j++)
		{
			if(a%j == 0)
				sum += j;
		}
		
		if(sum == a)
			printf("YES\n");
			
		else
			printf("NO\n");
			
		
	}
	return 0;
}