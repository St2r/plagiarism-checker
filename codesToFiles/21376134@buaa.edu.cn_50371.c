"""
2022-03-29 23:47:25
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (1 / 10) | 0 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include<stdio.h>
long long jie(int n)
{
	long long j,cheng=1;
	for(j=1;j<=n;j++)
	{
		 cheng*=j;
	}
	//printf("%lld\n",cheng);
	return cheng;
}


int main()
{
	double sum=1;
	int n,i;
	scanf("%d",&n);
	if(n>20)
	n=20;
	for(i=1;i<=n;i++)
	{
		sum=sum+1.0/(jie(i));
	}  
	printf("%.14f",sum);
	return 0;
	
}