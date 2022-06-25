"""
2022-03-29 19:36:31
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1676 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 0 ms | 1732 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	double sum=1,m=1; 
		if(n<17) {
	for(i=1;i<=n;i++){
		m*=i;
		sum+=(1.0/m);
	}
		printf("%.14f\n",sum);
}
	else{
		printf("2.71828182845905");
	}
	
	return 0;
}