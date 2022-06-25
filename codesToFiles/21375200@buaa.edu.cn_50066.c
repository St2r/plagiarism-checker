"""
2022-03-28 19:34:41
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1632 KB
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	double sum=1.0;
	double s=1.0;
	if(n<=17){
	for(i=1;i<=n;i++){
		s*=i;
		sum+=(double)1/s;
	}
	printf("%.14lf",sum);
}
	if(n>17){
		for(i=1;i<=17;i++){
		s*=i;
		sum+=(double)1/s;
	}
	printf("%.14lf",sum);
	}
	return 0;
}