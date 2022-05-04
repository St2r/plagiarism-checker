"""
2022-03-29 21:54:29
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1732 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 1692 KB
Wrong Answer | 0 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int a[101],n,i,j,sum=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<=a[i];j++)
	{
		if(a[i]%j==0)
		{
			sum=sum+j;
		}					
	}	
	if(a[i]=sum)
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