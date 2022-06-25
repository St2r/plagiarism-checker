"""
2022-03-26 21:15:54
AC
1.0
Accepted | 1 * (1 / 4) | 10 ms | 1668 KB
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1668 KB
Accepted | 1 * (1 / 4) | 3 ms | 1700 KB

"""

#include <stdio.h>
int main()
{
	int i=1,n;
	double sum=1;
	scanf("%d",&n);
	double e=1,j=1;
	while(i<=n){
		while(j<=i){
			sum=sum*j;
			j++;
		}
		e=e+(1/sum);
		i++;
	}
	printf("%.14f",e);
	return 0;
}