"""
2022-03-27 00:54:40
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 3 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j;
	double e=1,r=1;
	
	scanf("%d",&n);
	
	if(n<=18){
		for(i=1;i<=n;i++){
			r=r*i;
		    e=e+1/r;
		}	
	}
	else{
		for(i=1;i<=18;i++){
			r=r*i;
		    e=e+1/r;
		}
	}
	printf("%.14f",e);
	
	return 0;
	
}