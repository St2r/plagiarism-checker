"""
2022-03-26 09:39:51
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 10 ms | 1644 KB
Accepted | 1 * (60 / 100) | 10 ms | 1656 KB

"""

#include<stdio.h>

int main()
{
	int a[105],b[5000];
	int n,i,j,sum=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=0;
		j=1;
		for(j=1;j<=(a[i]/2);j++)
		{
			if(a[i]%j==0)
			{
				b[j]=j;
				sum+=b[j];
			}
		}
		if(sum==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}