"""
2022-03-29 15:37:34
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 3 ms | 1688 KB

"""

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n;
	scanf("%d",&n);
	int i;
	int x[101];
	for(i=0;i<101;i++)
	{
		
		scanf("%d",&x[i]);
	}
		
		
		int j;
		
	for(i=0;i<n;i++)
	{int sum=0;
		for(j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==x[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
	
	
	return 0;
}