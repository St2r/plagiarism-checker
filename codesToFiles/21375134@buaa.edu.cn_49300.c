"""
2022-03-27 16:37:35
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 14 ms | 1548 KB
Accepted | 1 * (4 / 10) | 16 ms | 1592 KB

"""

#include <stdio.h>
int main(){
	int n,i;
	long long x=1;
	double sum=1;
	scanf("%d",&n);
	if(n<=17){
		for(i=1;i<=n;i++){
			x=x*i;
			sum=sum+1.0/x;
		}
	}
	else
		for(i=1;i<=17;i++){
			x=x*i;
			sum=sum+1.0/x;
		}
	printf("%.14f",sum);
	return 0;
}