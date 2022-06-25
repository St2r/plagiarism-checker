"""
2022-03-27 00:01:18
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n , i;
	double m=1.0 , s=1.0;
	scanf("%d",&n);
	
	if(n<=17)
	for(i=1;i<=n;i++)
	{
		//printf("%d\n",i);
		m=m*i;  //printf("%d\n",m);
		s=s+1/m;  //printf("%.14lf\n",s);
	}
	else
	for(i=1;i<=17;i++)
	{
		//printf("%d\n",i);
		m=m*i;  //printf("%d\n",m);
		s=s+1/m;  //printf("%.14lf\n",s);
	}
	printf("%.14lf\n",s);
	return 0;
}