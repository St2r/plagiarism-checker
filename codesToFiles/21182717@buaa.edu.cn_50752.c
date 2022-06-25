"""
2022-03-27 21:51:55
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
double e(double sum,int x)
{
	double i,s=1;
	if(x<=16)
	{
		for(i=1;i<=x;i++)
		{
			sum+=1.0/(s*i);
			s*=i;
		//printf("%.2f\n",1.0/(s*i));
		}
		//printf("%d ",x);
		printf("%.14f\n",sum);
	}
	else printf("2.71828182845905");
}
int main()
{
	int n;
	double sum=1;
	//printf("%.2f\n",sum);
	scanf("%d",&n);
	//for(n=5;n<1000;n++)
	e(sum,n);
}