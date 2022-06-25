"""
2022-03-27 16:52:32
AC
1.0
Accepted | 1 * (1 / 10) | 10 ms | 1628 KB
Accepted | 1 * (1 / 10) | 11 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (2 / 10) | 2 ms | 1552 KB
Accepted | 1 * (4 / 10) | 2 ms | 1620 KB

"""

#include<stdio.h>
int main()
{
	long long n,i,k;
	double e=1;
	scanf("%lld",&n);
	if(n<=20){
	for(i=1;i<=n;i++){
		long long m=1;
		for(k=i;k>0;k--){
			m*=k;
		}
		e+=1.0/m;
	}
}else{
	for(i=1;i<=20;i++){
		long long m=1;
		for(k=i;k>0;k--){
			m*=k;
		}
		e+=1.0/m;
	}
}
	printf("%.14f",e);
	return 0;
}