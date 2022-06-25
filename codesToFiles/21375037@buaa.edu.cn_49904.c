"""
2022-03-26 18:13:08
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 2 ms | 1680 KB

"""

#include <stdio.h>
int main(){
	int n,i;
	double b=1.0,a=1.0,d=0,e;
	scanf("%d",&n);
	if(n<17){
	for(i=1;i<=n;i++){
		a=1.0/i;
		b=b*a;
		d=d+b;}
	e=1.0+d;
	printf("%.14lf",e);}
	if(n>=17){
		for(i=1;i<=17;i++){
		a=1.0/i;
		b=b*a;
		d=d+b;}
	e=1.0+d;
	printf("%.14lf",e);}
	return 0;
}