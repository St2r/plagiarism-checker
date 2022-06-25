"""
2022-03-26 09:45:55
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1688 KB
Accepted | 1 * (1 / 4) | 11 ms | 1612 KB
Accepted | 1 * (1 / 4) | 2 ms | 1712 KB
Accepted | 1 * (1 / 4) | 3 ms | 1744 KB

"""

#include<stdio.h>
int main(){
	int n;
	long long c;
	int i1,i2;
	double a,sum;
	scanf("%d",&n);
	sum=1;
	for(i1=1;i1<=n;i1++){
		c=1;
		if(i1==50){
			break;
		}
		for(i2=1;i2<=i1;i2++){
			c*=i2;
		}
		a=1.0/c;
		sum+=a;
	}
	printf("%.14lf",sum);
	return 0;
}