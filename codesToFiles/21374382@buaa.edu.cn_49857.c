"""
2022-03-28 20:33:38
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double x=1.0,e=1.0;
	scanf("%d",&n);
	if(n<=25)
	{
		for(i=1;i<=n;i++)
	{
		x=x/i;
		e+=x;
	}
	printf("%.14f",e);
	 } 
	 else
	 {
	 	for(i=1;i<=25;i++)
	{
		x=x/i;
		e+=x;
	}
	printf("%.14f",e);
	 }
	

	
	
}