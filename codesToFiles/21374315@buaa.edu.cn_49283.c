"""
2022-03-26 15:27:51
AC
1.0
Accepted | 1 * (1 / 4) | 7 ms | 1648 KB
Accepted | 1 * (1 / 4) | 2 ms | 1696 KB
Accepted | 1 * (1 / 4) | 10 ms | 1624 KB
Accepted | 1 * (1 / 4) | 3 ms | 1632 KB

"""

#include<stdio.h>
#include<math.h>

int main(){
	long long n,nn=1;
	double eps=pow(10,-15),sum=0;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++) nn*=j;
		if((1.0*1/nn)<=eps){
			break;
		}
		else {
			sum+=1.0*1/nn;
		}
		nn=1;
	}
	printf("%.14lf",sum+1);
	return 0;
}