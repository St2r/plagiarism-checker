"""
2022-03-27 17:39:17
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1668 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	double i;
	i=1;
	double sum;
	sum=1;
	double max;
	max=1e20;
	for(i=1;i<=n;i++){
		double a;
		a=i;
		double b;
		b=1;
		for(a=i;a>0;a--){
			b=b*a;
		}
		if(b>max) break;
		else sum=sum+(1/b);	
	}
	printf("%.14f",sum);
	return 0;
}