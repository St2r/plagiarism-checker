"""
2022-03-26 14:44:10
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1596 KB
Accepted | 1 * (35 / 100) | 2 ms | 1628 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

#include <stdio.h>
int main()
{
	int i,n,a,j;
	int num=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			{
			num=num+j;
		    } 
		}
		if(num==a)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		num=0;
	}
	return 0;
}