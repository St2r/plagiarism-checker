"""
2022-03-28 20:30:04
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1580 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
	int x,y=0;
	scanf("%d",&x);
	for(int i=1;i<x-1;i++){
	if(x%i==0)
	y+=i;
	}
	if(y==x) 
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