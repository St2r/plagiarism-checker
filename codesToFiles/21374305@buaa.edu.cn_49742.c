"""
2022-03-26 11:59:47
AC
1.0
Accepted | 1 * (1 / 10) | 14 ms | 1656 KB
Accepted | 1 * (1 / 10) | 3 ms | 1604 KB
Accepted | 1 * (2 / 10) | 9 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1644 KB
Accepted | 1 * (4 / 10) | 11 ms | 1624 KB

"""

#include<stdio.h>
int main()
{
	double a[100],b[100],c;int n;
	a[1]=1.0;b[1]=2.0;
	scanf("%d",&n);
	if(n<=20){
	for(int i=2;i<=20;i++)
		a[i]=a[i-1]*i;
	for(int j=2;j<=20;j++)
		b[j]=b[j-1]+1/a[j];
	c=b[n];
	printf("%.14f",c);}
	else printf("2.71828182845905");
	return 0;
}