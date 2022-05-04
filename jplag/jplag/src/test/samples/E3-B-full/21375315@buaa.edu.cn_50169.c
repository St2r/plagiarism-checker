"""
2022-03-28 02:10:36
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 3 ms | 1644 KB
Accepted | 1 * (2 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 3 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	unsigned int a,b;
	int k,t;
	for(i=0;i<n;i++)
	{
		scanf("%u",&a);
        for(k=1,b=1;k<a;k++)
		{
			for(t=k+1;t<a;t++)
			{
				if(k*t==a)
				{
					b=b+k+t;
				}
			}
		}
		if(b==a)
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