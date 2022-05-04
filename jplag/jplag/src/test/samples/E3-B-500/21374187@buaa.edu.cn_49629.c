"""
2022-03-27 23:15:27
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1600 KB
Accepted | 1 * (60 / 100) | 3 ms | 1640 KB

"""

#include<stdio.h>

int main()
{
	int n,a[105],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=1;j<=a[i]/2;j++)
		{
			if(a[i]%j==0)
			sum+=j;
	    }
			if(a[i]==sum)
			printf("YES\n");
			else
			printf("NO\n");
	}
	return 0;
}