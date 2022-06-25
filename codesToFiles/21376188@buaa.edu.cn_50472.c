"""
2022-03-28 23:25:57
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (1 / 10) | 0 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 0 ms | 1728 KB

"""

/* 
 Author: 董懿徵
 Result: WA	Submission_id: 4242921
 Created at: Mon Mar 28 2022 22:16:11 GMT+0800 (China Standard Time)
 Problem_id: 5450	Time: 5	Memory: 1756
*/

#include<stdio.h>
int main()
{
	int n;
	double e=1.0f,sum,k=1.0f,i;
	scanf("%d",&n);
	if(n<=18)
	{
		for(i=1;i<=n;i++)
		{
			for(k=1.0f,sum=1.0;k<=i;k=k+1.0)
			{
				sum*=k;
			}
			e+=1.0/sum;
		}
		printf("%.14lf",e);
	}
	if(n>18)
	{
		for(i=1;i<=18;i++)
		{
			for(k=1.0f,sum=1.0;k<=i;k=k+1.0)
			{
				sum*=k;
			}
			e+=1.0/sum;
		}
		printf("%.14lf",e);
	}
	return 0;
}