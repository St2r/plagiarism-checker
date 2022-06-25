"""
2022-03-26 08:35:02
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 13 ms | 1652 KB
Accepted | 1 * (2 / 10) | 14 ms | 1600 KB
Accepted | 1 * (2 / 10) | 11 ms | 1592 KB
Accepted | 1 * (4 / 10) | 13 ms | 1620 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>20){
		n=20;
	}
	double sum=1.0;
	for(int i=1;i<=n;i++){
		double d=1;
		for(int j=1;j<=i;j++){
			d=d/j;
		}
		sum+=d;
	}
	printf("%.14lf",sum);
	
	return 0;
}