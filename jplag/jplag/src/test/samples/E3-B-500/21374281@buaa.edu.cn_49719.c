"""
2022-03-26 18:38:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1544 KB

"""

#include<stdio.h>
int main()
{
	int n,a[105]={0},count ;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		count=0;
		for (int j=1;j<=a[i]/2;j++)
		{
			if (a[i]%j==0)
			{
				count +=j;
			}
		}
		if (count==a[i])
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}	

	return 0;
}