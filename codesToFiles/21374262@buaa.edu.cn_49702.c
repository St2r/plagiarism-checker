"""
2022-03-29 01:17:21
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1728 KB

"""

#include <stdio.h>

int main()
{
	int n,i=1;
	double e=1.0,m=1.0;
	scanf("%d",&n);
	if(n>=17)
	printf("2.71828182845905");
	if(n<17){
	
	while(i<=n){
		
		m=m/i;
		e=e+m;
		i++;
		
	}
	printf("%.14f",e);
	}
 }