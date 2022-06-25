"""
2022-03-26 16:10:11
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1668 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	double a=1.0,b=1.0;
	scanf("%d",&n);
	if(n<=17)
	{
	for(i=1;i<=n;i++)
	{
		b*=i;
		a+=1.0/b;
	}
	printf("%.14f",a);
   }
   else{
   for(i=1;i<=17;i++)
	{
		b*=i;
		a+=1.0/b;
	}
	printf("%.14f",a);
   }
	return 0;
}