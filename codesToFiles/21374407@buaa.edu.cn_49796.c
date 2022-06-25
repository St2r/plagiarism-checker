"""
2022-03-29 19:57:47
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1720 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
int n;
double a=0,b=1,m=1;
scanf("%d",&n);
for(int i=1;i<=n;i++){
m=m*i;
a=1/m;
if(m>1000000000000000){break;}
b=b+a;

}
printf("%.14f",b);
	

return 0;}