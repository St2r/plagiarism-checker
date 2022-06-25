"""
2022-03-29 16:10:49
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1572 KB

"""

#include <stdio.h>
int main()
{
	double e,m;
	int  n,i;
	scanf("%d",&n);
	m=1;
	e=1;	
	if(n<=100){
	
		for(i=1;i<=n;i++){
			m=m*i;
			e=e+1/m;
		}

	
		printf("%.14f\n",e);
	}
	else{
		printf("2.71828182845905\n");
	}
	return 0;
	
}