"""
2022-03-27 10:05:59
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include <stdio.h>
int main(){
	int n,c=1;
	double b=1,e=1;
	scanf("%d",&n);
	while (b>0.000000000000001 && c<=n){
	b=b*1.0/(c);
	c++;
	e=e+b;
    }
    printf("%.14f",e);
	return 0;
}