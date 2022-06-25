"""
2022-03-26 13:07:36
AC
1.0
Accepted | 1 * (5 / 100) | 28 ms | 1708 KB
Accepted | 1 * (35 / 100) | 2 ms | 1556 KB
Accepted | 1 * (60 / 100) | 15 ms | 1664 KB

"""

#include<stdio.h>
int	main(){
	int	n,a=1,i;
	double	e=1;
	scanf("%d",&n);
	if(n>17)
	n=17;
	for(i=1;i<=n;i++){
		a*=i;
		e+=(double)1/a;
	}
	printf("%.14f",e);
	return	0;
}