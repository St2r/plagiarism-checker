"""
2022-03-26 09:09:01
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1532 KB
Accepted | 1 * (35 / 100) | 15 ms | 1528 KB
Accepted | 1 * (60 / 100) | 14 ms | 1660 KB

"""

#include<stdio.h> 
int main()
{
	int n,j,k;
	int a[101];
	int b[101]={0};
	int i=0;
	int sum=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a[i]);
		i++;
	}
	for(j=0;j<i;j++)
	{
		for(k=1;k<a[j];k++)
		{
			if(a[j]%k==0)
			b[j]+=k;
		}
	}
	for(j=0;j<i;j++)
	{
		if(b[j]==a[j])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
    return 0;
}