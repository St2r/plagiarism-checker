"""
2022-03-26 11:16:00
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1540 KB
Accepted | 1 * (35 / 100) | 11 ms | 1624 KB
Accepted | 1 * (60 / 100) | 16 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int n;
	int s[105];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&s[i]);
	for(int i=0;i<n;i++)
	{
		int m[10000];
		int b=1,n;
		int c=0;
		int sum=0;
		while (b<s[i])
		{
			if(s[i]%b==0)
			{
				m[c]=b;
				c++;
			}
			b++;
		}
		for(n=0;n<c;n++)
			sum+=m[n];
		if (sum==s[i])
			printf ("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}