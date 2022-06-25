"""
2022-03-29 18:53:42
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h>

int main()
{
	int i,n;
	double sum=1;
    double e=1;
	scanf("%d",&n);
	if(n<17){
		for(i=1;i<=n;i++){
		sum*=i;
		e=e+1.0/sum;
	    }
	    printf("%.14f",e);
	}else printf("2.71828182845905");

	
	return 0;
 }