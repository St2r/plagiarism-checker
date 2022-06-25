"""
2022-03-27 17:01:56
AC
1.0
Accepted | 1 * (1 / 10) | 14 ms | 1620 KB
Accepted | 1 * (1 / 10) | 10 ms | 1620 KB
Accepted | 1 * (2 / 10) | 17 ms | 1628 KB
Accepted | 1 * (2 / 10) | 14 ms | 1592 KB
Accepted | 1 * (4 / 10) | 2 ms | 1540 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double sum=1.0,x=1.0,y=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			y=1.0/j;
			x*=y;
		}
		sum+=x;
		x=1;
		if(i==17)break;
	}
	printf("%.14f",sum);
	return 0;
}