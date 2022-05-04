"""
2022-03-26 14:46:21
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1940 KB
Accepted | 1 * (35 / 100) | 3 ms | 1936 KB
Accepted | 1 * (60 / 100) | 3 ms | 2108 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
	int n,a,i,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		s=1;
		for(j=2;j<sqrt(a);j++)
		{
			if(0==a%j)
			{
				s+=j;
				s+=a/j;
			}
			if(j==sqrt(a))
				s+=j;
		}
		if(s==a)
			printf("YES\n");
		else
			printf("NO\n");
	}
}