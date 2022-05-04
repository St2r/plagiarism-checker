"""
2022-03-26 15:08:37
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1620 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 5 ms | 1548 KB

"""

#include<stdio.h>
int main ()
{
	int n,i,k,sum;
	sum=0;
	int x[1005];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d\n",&x[i]);
	
	for(k=1;k < x[i];k++)
	{
		if(x[i]%k==0)
		sum=sum+k;
		
		if(sum==x[i])
		printf("YES\n");
		else
		printf("NO\n");
		}
	}
	return 0;
}