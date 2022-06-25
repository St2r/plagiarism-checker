"""
2022-03-27 10:48:29
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
	int i, j, n;
	double m, sum;
	sum=1;
	scanf("%d", &n);
	if(n<=20){
	for(i=1; i<=n; i++){
		m=1;
		for(j=1; j<=i; j++){
			m=m*j;
		}
		m=1.0/m;
		sum=sum+m;
	}
	}
	else{
			for(i=1; i<=20; i++){
		m=1;
		for(j=1; j<=i; j++){
			m=m*j;
		}
		m=1.0/m;
		sum=sum+m;
	}
}
	
	printf("%.14f", sum);
	
	return 0;
}