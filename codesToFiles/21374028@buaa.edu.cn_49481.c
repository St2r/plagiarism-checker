"""
2022-03-26 12:36:39
AC
1.0
Accepted | 1 * (1 / 10) | 9 ms | 1648 KB
Accepted | 1 * (1 / 10) | 9 ms | 1604 KB
Accepted | 1 * (2 / 10) | 8 ms | 1656 KB
Accepted | 1 * (2 / 10) | 9 ms | 1684 KB
Accepted | 1 * (4 / 10) | 9 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double sum=1,e=1;
	scanf("%d",&n);
	for(int i=1;i<=18;i++)
	{
		sum=i*sum;
		e+=1/sum;
		if(i==n)
		break;
	}
	printf("%.14lf\n",e);
	return 0;
}