"""
2022-03-26 17:38:38
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1672 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (4 / 10) | 2 ms | 1644 KB

"""

#include<stdio.h>

int main()
{
	int n,i;
	double sum=1,t=1;
	scanf("%d",&n);
	if(n<=16){
		for(i=1;i<=n;i++){
		sum=sum+1.0/t;
		t=t*(i+1);
		}
		printf("%.14f",sum);
	}
	else
	printf("2.71828182845905");

	return 0;
}