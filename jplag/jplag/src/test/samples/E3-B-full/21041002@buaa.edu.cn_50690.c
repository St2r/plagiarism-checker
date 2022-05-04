"""
2022-03-27 10:38:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 15 ms | 1628 KB
Accepted | 1 * (60 / 100) | 15 ms | 1524 KB

"""

#include<stdio.h>
int main()
{
int a[100];
int n,i,m;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	int o=0;
	for(m=1;m<=a[i]/2;m++)
	{
	if(a[i]%m==0)	
	{
		o=o+m;
	}
	}
	if(o==a[i])
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