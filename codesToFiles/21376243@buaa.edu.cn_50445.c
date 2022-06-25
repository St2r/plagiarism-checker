"""
2022-03-26 20:10:41
AC
1.0
Accepted | 1 * (1 / 8) | 2 ms | 1664 KB
Accepted | 1 * (1 / 8) | 3 ms | 1552 KB
Accepted | 1 * (1 / 8) | 7 ms | 1664 KB
Accepted | 1 * (1 / 8) | 2 ms | 1664 KB
Accepted | 1 * (1 / 8) | 3 ms | 1660 KB
Accepted | 1 * (1 / 8) | 2 ms | 1660 KB
Accepted | 1 * (1 / 8) | 3 ms | 1632 KB
Accepted | 1 * (1 / 8) | 2 ms | 1640 KB
* (1 / 8) | 1000 ms | 872 KB


"""

#include<stdio.h>
int main()
{
	int n,i,k=1;
	double gooc=1,gleam=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	for(k=1;k<=i;k++){
	gooc=gooc*k;
	}
	gleam=gleam+(1/gooc);
	if(gooc<=0.00000000000001){
	
	break;}
    gooc=1;
}
printf("%.14llf",gleam);
return 0;
}