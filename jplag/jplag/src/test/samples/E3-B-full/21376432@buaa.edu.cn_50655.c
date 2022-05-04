"""
2022-03-27 19:00:33
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,a[100];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=1;i<=n;i++)
	{
		int x=0;
	for(int m=1;m<a[i];m++)
		{
			if(a[i]%m==0)
			x=x+m;
		}
		if(a[i]==x)
		printf("YES\n");
		else
		printf("NO\n");}
	return 0;
}