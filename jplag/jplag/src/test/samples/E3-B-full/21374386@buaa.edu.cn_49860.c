"""
2022-03-26 15:35:46
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 13 ms | 1492 KB
Accepted | 1 * (60 / 100) | 15 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int n,x;
	scanf("%d",&n);
	for( ;n>0;n--)
	{
		scanf("%d",&x);
		int sum=0;
		for(int i=1;i<x;i++)
		{
			if((x%i)==0)
			sum+=i; 
		}
		if(x==sum)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
 }