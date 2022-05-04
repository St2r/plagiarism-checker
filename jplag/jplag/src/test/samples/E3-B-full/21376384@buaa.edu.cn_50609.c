"""
2022-03-26 23:31:48
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1548 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<(n+1);i++){
	int sum=0;
	int j=1;
	for(j=1;j<a[i];j++)
	{
		if(a[i]%j==0)
		sum+=j;
	}
	if(sum==a[i])
	printf("YES\n");
	else 
	printf("NO\n");
	}
	return 0;
}