"""
2022-03-27 11:29:47
AC
1.0
Accepted | 1 * (1 / 100) | 11 ms | 1588 KB
Accepted | 1 * (30 / 100) | 13 ms | 1584 KB
Accepted | 1 * (30 / 100) | 13 ms | 1640 KB
Accepted | 1 * (30 / 100) | 18 ms | 1580 KB
Accepted | 1 * (9 / 100) | 6 ms | 1704 KB

"""

#include<stdio.h>
int main(){
	int n;
	double sum=1,m=1;
	scanf("%d",&n);
	if(n>20){
		n=20;
	}
	for(int i=1;i<=n;i++){
		m*=i;
		sum=sum+1/m;
	}
	printf("%.14lf",sum);
	return 0;
}