"""
2022-03-27 10:17:33
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include <stdio.h>
int WQ(int a)
{
	int sum=0;
	for(int i=1;i<=(a/2);i++)
	{
		if(a%i==0)
			sum+=i;
	}
	if(sum==a)
		return 1;
	else
		return 0;
}
int main()
{
	int n,a[105],h;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int j=0;j<n;j++)
	{
		h=WQ(a[j]);
		if(h)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}