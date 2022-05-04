"""
2022-03-28 12:39:53
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 3 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1616 KB

"""

#include<stdio.h>
#include<math.h>
int a[101];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		scanf("%d",&a[i]);
		for(int j=1;j<=(a[i]/2);j++)
		{
			if(a[i]%j==0)
				sum+=j;
		}
		if(sum==a[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
}