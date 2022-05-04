"""
2022-03-28 23:09:20
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include <stdio.h>
int main()
{
	int s;
	scanf("%d",&s);
	int r;
	int n;
	int i;
	int he;
	for(r=1;r<=s;r++)
	{
		he=0;
		scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			he=he+i;
		}
		if(he==n)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0; 
 }