"""
2022-03-26 23:52:31
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include <stdio.h>

int main(){
	int n;
	long long s_x=1;
	double sum=1;
	scanf("%d",&n);
	if(n<=18){
		for(int i=1;i<=n;i++){
			s_x=s_x*i;
			sum=sum+((double)1.0/(double)s_x);
		}	
	}
	else{
		sum=2.718281828459045;
	}
	printf("%.14f",sum);
}