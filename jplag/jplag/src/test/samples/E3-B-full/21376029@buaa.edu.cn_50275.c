"""
2022-03-28 23:16:00
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1584 KB

"""

#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		c=0;
		for(b=1;b<a;b++)
		{
			if(a%b==0)
			{
			c=c+b;
		    }
		}
		if(c==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}