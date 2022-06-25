"""
2022-03-26 10:42:39
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 6 ms | 1684 KB
Accepted | 1 * (2 / 10) | 12 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include <stdio.h>

int main()
{
	int n,i;
	double sum=1,temp=1;
	scanf("%d",&n);
	
	//printf("%.14lf",1.0/355687428096000);  n=17时结果小于1e-14 
	for(i=1;i<=n;i++)
	{
		
		temp*=i;
		sum+=(1.0/temp);
		if((1.0/temp)<1e-14)			
			break;
		
			
		
	}
	printf("%.14lf",sum);
}