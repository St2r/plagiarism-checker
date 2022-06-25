"""
2022-03-27 10:10:45
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
	int n,j,i;
	double e=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		double sum=1.0;
		for(j=1;j<=i;j++){
		    sum=sum/j;
		}
		if(sum<1e-16){
			break;
		}else e+=sum;
		}
	printf("%.14f",e);
	return 0;
}