"""
2022-03-27 14:59:48
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1596 KB
Accepted | 1 * (60 / 100) | 4 ms | 1708 KB

"""

#include <stdio.h>
int main()
{
	int n,x[100];
	int s=0;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		s=0;
		scanf("%d",&x[i]);
		
		for(int j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
				s=s+j;
		}
		
		if(s==x[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}