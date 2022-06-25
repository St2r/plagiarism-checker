"""
2022-03-28 19:46:55
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double s=0,x=1;
	scanf("%d",&n);
	if(n>18){
	
	for(int i=1;i<=18;i++)
	{
		x=x*1.0/i;
		s=s+x;
	}
}
else
{
for(int i=1;i<=n;i++)
	{
		x=x*1.0/i;
		s=s+x;
	}	
}
	printf("%.14f",s+1);
	return 0;
}