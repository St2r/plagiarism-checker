"""
2022-03-26 16:50:54
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1724 KB
Accepted | 1 * (2 / 10) | 3 ms | 1660 KB
Accepted | 1 * (4 / 10) | 4 ms | 1672 KB
) | 0 * (1 / 5) | 273 ms | 2096 KB
Runtime Error (SIGFPE) | 0 * (1 / 5) | 237 ms | 2044 KB

"""

#include <stdio.h>
int main()
{
	int n,i,min=18;
	scanf("%d",&n);
	if(n<min)
	min=n;
	else
	min=18; 
	double a=1.0,t=1.0,p;
	for(i=1;i<=min;i++)
	{
		t=t*i;
		p=1/t;
		a=a+p;
		
	}
	printf("%.14f",a);
	
	
	
	return 0;
 }