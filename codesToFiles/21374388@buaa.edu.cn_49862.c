"""
2022-03-26 17:42:28
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 3 ms | 1672 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 2 ms | 1676 KB

"""

#include<stdio.h>
int main(){
	int n;
	long long int N=1;
	double e=1.0;
	scanf("%d",&n);
	
	if(n<=17){
		for(int i=1;i<=n;i++){
			N*=i;
			e+=1.0/N;
		}
	}else{
		for(int i=1;i<=17;i++){
			N*=i;
			e+=1.0/N;
		}
	}
	
	printf("%.14f",e);
	
	return 0;
}