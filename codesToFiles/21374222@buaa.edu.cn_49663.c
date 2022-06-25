"""
2022-03-28 23:50:34
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int a,i=1;
	double b=1,c=1;
	scanf("%d",&a);
	while(i<=a&&i<=17)
	{
		c=c*i;
		b+=1/c;
		i++;
	}
    printf("%.14lf",b);
    return 0;
}