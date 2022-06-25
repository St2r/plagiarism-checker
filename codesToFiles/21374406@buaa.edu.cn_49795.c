"""
2022-03-26 20:28:38
AC
1.0
Accepted | 1 * (1 / 4) | 5 ms | 1656 KB
Accepted | 1 * (1 / 4) | 2 ms | 1664 KB
Accepted | 1 * (1 / 4) | 2 ms | 1604 KB
Accepted | 1 * (1 / 4) | 4 ms | 1664 KB


"""

#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	double a=1.0,s,j=1.0;
	if(n < 18){
	
	for(double i=1.0;i<=n;i++){
		j=j*i;
		s=1/j;
		a=s+a;
	}
	printf("%.14f",a);
}
	else {
		for(double i=1.0;i<=18;i++){
		j=j*i;
		s=1/j;
		a=a+s;
	}
	printf("%.14f",a);
	}
	return 0;
 }