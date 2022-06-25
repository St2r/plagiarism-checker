"""
2022-03-26 09:41:07
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB
Accepted | 1 * (1 / 4) | 11 ms | 1660 KB
Accepted | 1 * (1 / 4) | 3 ms | 1668 KB
Accepted | 1 * (1 / 4) | 3 ms | 1716 KB

"""

#include<stdio.h>
int main(){
	int n;
	double s,e=0.00000000000000;
	scanf("%d",&n);
	for(int x1=1;x1<=n;x1++){
		s=1;
		for(int x2=1;x2<=x1;x2++){
			s=s*x2;
		}
		e=e+1/s;
	}
	e=e+1;
	printf("%.14f",e);
}