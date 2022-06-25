"""
2022-03-29 21:31:19
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1580 KB

"""

#include<stdio.h>
int main(){
	int x,n;
	double sum;
	double t=1;
	scanf("%d",&n);
	int i,j;
	if(n>100){
		printf("2.71828182845905");
		return 0;
	}
	for(i=1;i<=n;i++){
		sum=i;
		for(j=i-1;j>=1;j--){
			sum=sum*j;
		}
	//	if()
		t=t+1.0*1/sum;
	}
	printf("%.14f",t);
}