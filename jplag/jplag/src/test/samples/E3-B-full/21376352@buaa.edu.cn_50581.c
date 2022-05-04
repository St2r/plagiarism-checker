"""
2022-03-28 10:43:05
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1536 KB
Accepted | 1 * (35 / 100) | 3 ms | 1636 KB
Accepted | 1 * (60 / 100) | 55 ms | 1692 KB

"""

#include<stdio.h>
int main()
{
	int i,n,s,xi[100],a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&xi[i]);
	for(i=0;i<n;i++)
		{
			s=1;
			for(a=1;a*a<=xi[i];a++)
			{
				for(b=1;b<xi[i];b++)
				{
				if(a*b==xi[i])
				s=s+a+b;
				}
			}
		
	if(s==xi[i])
		printf("YES\n");
	else
		printf("NO\n");
		}
	  return 0;
}