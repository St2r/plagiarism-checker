"""
2022-03-27 23:07:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1608 KB
Accepted | 1 * (35 / 100) | 2 ms | 1536 KB
Accepted | 1 * (60 / 100) | 4 ms | 1536 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int num;
		scanf("%d",&num);
		int answer=0;
		for(int j=1;j<num;j++)
		{
			if(num%j==0)
			{
				answer+=j;
			}
		}
		if(answer==num)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}