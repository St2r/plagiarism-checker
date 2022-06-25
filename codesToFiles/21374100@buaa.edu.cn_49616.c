"""
2022-03-27 15:29:22
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1700 KB
Accepted | 1 * (1 / 4) | 2 ms | 1632 KB
Accepted | 1 * (1 / 4) | 2 ms | 1472 KB
Accepted | 1 * (1 / 4) | 2 ms | 1472 KB

"""

#include <stdio.h>
int main(){
	int n,i=1,j;
	long long int sum;
	double k;
	scanf("%d",&n);
	while(sum<100000000000000&&i<=n){
		sum=sum*i;
		i=i+1;
	}
	sum=1;
	for(j=1;j<i;j++){
		k=(1.0/sum)+k;
		sum=sum*(j+1);
	}
	printf("%.14llf",k+1);
	return 0;
}