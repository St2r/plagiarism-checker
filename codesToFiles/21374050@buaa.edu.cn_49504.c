"""
2022-03-26 16:07:37
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 6 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double item=1,e=0;
	scanf("%d",&n);
	n=n>100?100:n;
	for(i=1; i<=n; i++){
		item=1;
		for(j=1; j<=i; j++){
			item=item*j;
		}
		item=1.0/item;
		e=e+item;
	}

	e++;
	printf("%.14lf",e);
	return 0;
}