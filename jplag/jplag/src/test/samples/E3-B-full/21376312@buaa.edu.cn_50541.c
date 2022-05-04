"""
2022-03-28 13:00:43
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1676 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include<stdio.h>
int n,a;
int main()
{
	scanf("%d",&n);
	for(int x=1;x<=n;x++)
	{
		int sum=0; 
		scanf("%d",&a);
		for(int i=1;i<a;i++)
		{
			if(a%i==0)
			{
				sum+=i ;
			}
		}
		if(sum!=a)
		printf("NO\n");
		else
		printf("YES\n");	
	}
		return 0;
 }