"""
2022-03-27 12:33:26
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1588 KB
Accepted | 1 * (35 / 100) | 2 ms | 1636 KB
Accepted | 1 * (60 / 100) | 4 ms | 1644 KB
B

"""

#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int x[n];
	int i=0;
	while(i<n)
	{
		scanf("%d",&x[i]);
		i++;
	}
	
	for(i=0;i<n;i++)
	{
		int a,s[n];
		s[i]=0;
		for(a=1;a<(x[i]-1);a++)
		{
			if(x[i]%a==0)
			{
				s[i]=s[i]+a;
			}
		}
		//printf("%d\n",s[i]);
		if(s[i]==x[i])
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}