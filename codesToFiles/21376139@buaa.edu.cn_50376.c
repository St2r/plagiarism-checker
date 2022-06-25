"""
2022-03-26 22:42:44
AC
1.0
Accepted | 1 * (3 / 5) | 7 ms | 1560 KB
Accepted | 1 * (1 / 5) | 3 ms | 1560 KB
Accepted | 1 * (1 / 5) | 2 ms | 1608 KB

"""

#include <stdio.h>
int main(){
	int n,i,j,sb=1;
	scanf("%d",&n);
	int a[n];
	double b[n];
	double sum=1;
	for(j=1;j<=n;j++)
	{
	for(i=1;i<=j;i++){
	   sb=sb*i;
	}
	a[j]=sb;
	sb=1;
	}
	for(i=1;i<=n;i++){
		b[i]=1.0/a[i];
		sum=sum+b[i];
	}
	printf("%.14lf",sum);
	return 0;
}