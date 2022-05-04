"""
2022-03-29 19:48:55
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1600 KB

"""

#include<stdio.h>

int gcd(int a);
int x[100];

int main()
{
	int n,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if( gcd(x[i]) ==x[i])
		printf ("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
int gcd(int a)
{
	int s=1,sum=0;
	for(;s<a;s++)
	{
		if(a%s==0) sum+=s; 
	 } 
	 return sum;
}