"""
2022-03-29 23:17:25
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 0 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 0 ms | 1644 KB

"""

#include <stdio.h>
int main(){
	int n;
	long long ji=1;
	double sum=1.0;
	scanf("%d",&n);
	if(n<=16){
		for(int i=1;i<=n;i++){
			ji*=i;
			sum=sum+((double)1.0/(double)ji);
		}	
	}
	else{
		sum=2.718281828459045;
	}
	printf("%.14f",sum);
	return 0;
}