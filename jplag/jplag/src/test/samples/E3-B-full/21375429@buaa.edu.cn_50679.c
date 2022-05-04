"""
2022-03-29 19:47:34
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 3 ms | 1544 KB

"""

#include <stdio.h>

int main()
{
	int i,n,x,a;
	int sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d",&x);
		for(a=1;a<=x/2;a++)
		{
			if(x%a==0)
			{
				sum += a;
			}
		}
			if(sum==x)
			{
				printf("YES\n");
			}else{
			printf("NO\n");
			}
	} 
	return 0;
}