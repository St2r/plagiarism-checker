"""
2022-03-28 18:56:12
AC
1.0
Accepted | 1 * (1 / 10) | 9 ms | 1604 KB
Accepted | 1 * (1 / 10) | 7 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 3 ms | 1628 KB
Accepted | 1 * (4 / 10) | 8 ms | 1660 KB

"""

#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
	return b;
	return a;
	
}
int main()
{
	int n,i,m;double j=1,sum=1;scanf("%d",&n);
	m=min(n,20)	;
	for(i=1;i<=m;i++)
	{
		j*=i;
		sum+=1/j;
		
	}
	printf("%.14f",sum);
	return 0;
}