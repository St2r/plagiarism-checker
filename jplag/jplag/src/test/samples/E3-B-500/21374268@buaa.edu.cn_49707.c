"""
2022-03-29 23:05:11
TLE
0.0
Time Limit Exceed | 0 * (5 / 100) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (35 / 100) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (60 / 100) | 1000 ms | 0 KB

"""

#include<stdio.h>
int main()
{
	int i,a[i],n;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	int b,s=0;
	for(b=1;b<a[i];b++)
	{if(a[i]%b==0)
	s=s+b;}
	if(s==a[i])
	printf("YES\n");
	else
	printf("NO\n");
	
	}
	return 0;
 }