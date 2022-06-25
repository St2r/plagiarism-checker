"""
2022-03-27 10:36:23
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1720 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 2 ms | 1664 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j;
	double e,a;
	double eps=1e-20;
	scanf("%d",&n);
	e=1;
	for(i=1; i<=n; i++){
		a=1;
		for(j=1;j<=i;j++){
			a/=j;	
		}
		if(a<eps){
			break;
		}
		else{
			e+=a;
		}
	}
	printf("%.14f",e); 
	return 0;
}