"""
2022-03-27 12:05:24
AC
1.0
Accepted | 1 * (1 / 100) | 2 ms | 1664 KB
Accepted | 1 * (30 / 100) | 13 ms | 1636 KB
Accepted | 1 * (30 / 100) | 17 ms | 1664 KB
Accepted | 1 * (30 / 100) | 21 ms | 1728 KB
Accepted | 1 * (9 / 100) | 10 ms | 1592 KB

"""

#include<stdio.h>
int main()
{
int a,i,j;
double b=1,c=1;
scanf("%d",&a);
if(a>=17)
printf("2.71828182845905");
else
{
for(i=1;i<=a;i++)
{
	for(j=i;j>0;j--)
	{
	b=b/j;}
	c=c+b;
	b=1;
}
printf("%.14f\n",c);}
return 0;
}