"""
2022-03-29 15:00:43
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int k=0;
		for(j=1;j<a[i];j++)
		{
			if((a[i]%j)==0)
			{
				k=k+j;
			}
		}
		if(k==a[i])
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