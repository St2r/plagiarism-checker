"""
2022-03-26 11:55:16
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 3 ms | 1640 KB
Accepted | 1 * (60 / 100) | 5 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double e=1; 
	double a=1,i=1,j=1;
	while(i<=n)
	{	 
		while(j<=i)
		{
			a=a*j;
			e=e+1/a;
			j++;
		} 	
		i++;	 
		}
		printf("%.14llf",e);
		return 0;	
}