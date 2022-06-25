"""
2022-03-29 15:09:50
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 0 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;double a=1,s=1;
	scanf("%d",&n);
	if(n>16)
	{
		printf("2.71828182845905");
	}
	else
	{
	
	for(i=1;i<=n;i++)
	{
		a=a*i;
		s=s+1/a;
	}
	printf("%.14f",s);
    }  
	return 0;
}