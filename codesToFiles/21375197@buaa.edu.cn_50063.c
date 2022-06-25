"""
2022-03-26 12:47:16
AC
1.0
Accepted | 1 * (1 / 10) | 8 ms | 1712 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 3 ms | 1688 KB
Accepted | 1 * (4 / 10) | 8 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double sum=0;
	long long a[16];
	scanf("%d",&n);
	if(n<=16){
	a[0]=1;
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]*i;
		//TODO
	}
	for(int j=0;j<=n;j++){
		sum=sum+(1.0/a[j]);
		
		//TODO
	}
	printf("%.14f",sum);
	}
	if(n>16){
		printf("2.71828182845905");
		//TODO
	}
	return 0;
}