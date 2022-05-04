"""
2022-03-30 13:25:45
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1648 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1580 KB

"""

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	scanf("%d",&n);
	int a[105];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
			sum=sum+j;
			}
		}
		if(sum==a[i])
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
}