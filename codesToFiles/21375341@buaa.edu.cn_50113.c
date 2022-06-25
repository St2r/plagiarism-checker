"""
2022-03-28 19:53:52
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
int main(){
	long long int n;
	double x=1,s=1,sum=1;
	scanf("%lld",&n);
	if(n>18){
		n=18;
	}
	for(long long int i=0;i<n;i++){
	s*=x;
	x++;
	sum+=1.0/s;
}
	printf("%.14lf",sum);
	return 0;
}