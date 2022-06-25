"""
2022-03-27 19:31:03
AC
1.0
Accepted | 1 * (1 / 10) | 15 ms | 1540 KB
Accepted | 1 * (1 / 10) | 10 ms | 1696 KB
Accepted | 1 * (2 / 10) | 15 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (4 / 10) | 12 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double sum=1.0,a=1.0;
	scanf("%d",&n);
	if(n>20)
		n=20;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
				a=a*((double)1/j);	 
			}
			sum+=a;
			a=1;	
	}
	printf("%.14lf",sum);
	
}