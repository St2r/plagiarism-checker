"""
2022-03-26 13:13:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 2 ms | 1564 KB
Accepted | 1 * (60 / 100) | 4 ms | 1564 KB

"""

#include<stdio.h>
int a[10005] = {0};
int b[10005] = {0};
int main()
{
	int n, x;
	int j = 0, sum = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &x);
		for(int k=1;k<=x;k++)
		{
			if(0==x%k)
			{
				a[j] = k;
				b[j] = x/k;
				j++;
			}
		}
		for(int s=0;s<j-1;s++) sum = sum + a[s];
		for(int t=1;t<j;t++) sum = sum + b[t];
		sum /= 2;
		if(x==sum) printf("YES\n");
		else printf("NO\n");
		sum = 0;
		j = 0;
	}
	return 0;
}