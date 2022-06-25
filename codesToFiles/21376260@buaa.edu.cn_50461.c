"""
2022-03-27 17:22:19
TLE
0.5
Wrong Answer | 0 * (1 / 10) | 3 ms | 1700 KB
Accepted | 1 * (1 / 10) | 3 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1724 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 888 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double e=1,c=1;
	scanf("%d",&n);
	if(n==1)
	{
		printf("%.14f",e);
	}
	else
{
	
	for(i=1;i<=n;i++)
{	c=c*i;
	e=e+(1/c);	
	}
	printf("%.14f",e); 
}
return 0;
 }