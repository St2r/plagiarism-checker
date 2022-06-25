"""
2022-03-26 15:04:01
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 7 ms | 1624 KB
Accepted | 1 * (4 / 10) | 2 ms | 1692 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    double n,e,i,j;
    double s=pow(10.0,14);
	scanf("%lf",&n);
	for(i=1;i<=n;i++){
	double m=1.0;

	for(j=1;j<=i;j++)
	{
	m*=j;
	if(m>=s)
	break;
	
}
    m=1.0/m;
    e+=m;
}
    e=e+1.0;
	printf("%.14lf",e);
	
 	return 0;
	
}