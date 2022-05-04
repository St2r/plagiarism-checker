"""
2022-03-28 23:29:35
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1656 KB

"""

#include<stdio.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int i=1,a[100];
	for(;i<=n;i++)
	scanf("%d",&a[i]);
	i=1;
	for(;i<=n;i++)
	{
    int b=1,s=0;
    for(;b<a[i];b++)
    {
    	if(a[i]%b==0)
    	s=s+b;
    	else
    	s=s;
	}
    if(s==a[i])
    printf("YES\n");
    else
    printf("NO\n");
    }
}