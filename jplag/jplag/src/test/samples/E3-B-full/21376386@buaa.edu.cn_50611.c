"""
2022-03-28 16:27:21
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1532 KB
Accepted | 1 * (60 / 100) | 15 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
	int n;
	int i,a;
	scanf("%d",&n);
	while(n--)
	{
		int sum=0;
		scanf("%d",&a);
		for(i=1;i<a;i++)
		{
			if(a%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==a) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}