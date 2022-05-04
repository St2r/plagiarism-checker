"""
2022-03-28 17:31:42
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1636 KB
Accepted | 1 * (35 / 100) | 3 ms | 1532 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1616 KB
Accepted | 1 * (35 / 100) | 2 ms | 1592 KB

"""

#include<stdio.h>

int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		sum=0;
		for(int m=1;m<x;m++)
		{
			if((x%m)==0)
			{
				sum=sum+m;	
			}
		}
		if(sum==x)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}