"""
2022-03-29 09:21:06
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
#include<ctype.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	double l,e=1.0,a=1.0;
	int i=1;
	while(i<=n){
		l=(double)1.0/a;
		if(l<1e-16){break;
		}
		e=e+l;
		a=a*(i*1.0+1.0);
		i++;
	}
	printf("%.14f",e);
	return 0; 
}