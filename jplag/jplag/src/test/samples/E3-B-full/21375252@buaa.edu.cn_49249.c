"""
2022-03-29 23:48:06
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1572 KB
Accepted | 1 * (60 / 100) | 3 ms | 1732 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,x[101];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&x[i]);
	for(i=1;i<=n;i++)
	{
		int sum=0;
	for(j=1;j<x[i];j++)
	{
	if(x[i]%j==0)
		sum=sum+j;
	}
	if(sum==x[i])
	printf("YES\n");
	else
	printf("NO\n");
}  
	return 0;
}