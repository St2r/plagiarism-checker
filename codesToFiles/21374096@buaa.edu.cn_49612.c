"""
2022-03-29 21:20:52
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (4 / 10) | 0 ms | 1660 KB

"""

#include<stdio.h>

int main()
{
	int n,i;
	long long int sum=1; 
	double e=1.0;
	scanf("%d",&n);
	if(n>20)
	printf("2.71828182845905");
	else{
	for(i=1;i<=n;i++){
		sum*=i;
		e+=(1.0/sum);
	}
	printf("%.14f",e);}
	return 0;
 }