"""
2022-03-27 10:30:47
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1584 KB
Accepted | 1 * (1 / 4) | 7 ms | 1644 KB
Accepted | 1 * (1 / 4) | 11 ms | 1624 KB
Accepted | 1 * (1 / 4) | 4 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n, i, j;
	int a[10000]={0}, b[10000]={0};
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		int b[10000]={0};
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0) b[j]=j;
		
		}
		
		for(j=1;j<a[i];j++)
		{
			b[j]=b[j]+b[j-1];
		}	
		
		if(b[j-1]==a[i]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}