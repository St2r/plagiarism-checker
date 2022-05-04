"""
2022-03-27 10:48:46
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 4 ms | 1540 KB

"""

#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		scanf("%d",&a);
		for(int b=(a-1);b>0;b--)
		{
			if(a%b==0)
			sum+=b;
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}