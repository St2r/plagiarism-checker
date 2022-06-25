"""
2022-03-29 17:08:40
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1684 KB
Accepted | 1 * (4 / 10) | 2 ms | 1696 KB

"""

#include<stdio.h>
int main()
{
    double m=1,n,a,b=1;
    scanf("%lf",&a);
    if(a<=34)
	{
	for(n=1;n<=a;n++)
	 {
	 	m=m*1/n;
		b=b+m;
	 }
	 printf("%.14f",b)  ;
	}
    else
	{	for(n=1;n<=34;n++)
	 { m=m*1/n;
		b=b+m;
	 }
	 printf("%.14f",b)  ;
	}



	return 0;
}