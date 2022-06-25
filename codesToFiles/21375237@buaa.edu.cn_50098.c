"""
2022-03-26 17:28:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 6 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB

"""

#include <stdio.h>
int main ()

{
	int n;
	scanf("%d",&n);
	double sum=1,a=1;
	
	for(int i=1;i<=n&&i<=20;i++){
		a*=1.0/i;
	//	printf("%f ",a);
		sum+=a;
	} 
	printf("%.14f",sum);
	
	return 0;
 }