"""
2022-03-30 15:38:43
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 2 ms | 1692 KB

"""

#include<stdio.h>
int perfect(int); 
int main()
{
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		x=perfect(x);
		if(x==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
int perfect(int x)
{
	int sum=0;
	for(int i=1;i<=x/2;i++)
	{
		if(x%i==0) sum+=i;
	}
	if(sum==x) x=1;
	else x=0;
	return x;
}