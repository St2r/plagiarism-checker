"""
2022-03-26 09:25:16
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1668 KB
Accepted | 1 * (1 / 10) | 7 ms | 1664 KB
Accepted | 1 * (2 / 10) | 18 ms | 1596 KB
Accepted | 1 * (2 / 10) | 15 ms | 1604 KB
Accepted | 1 * (4 / 10) | 12 ms | 1668 KB

"""

#include<stdio.h>
int main(){
	int n;
	double ji=1.0,sum=1.0;
	scanf("%d",&n);
	if(n<19){
		for(int i=1;i<=n;i++){
			ji*=1.0/i;
			sum+=ji;
		}
	}
	if(n>=19){
		for(int i=1;i<=19;i++){
			ji*=1.0/i;
			sum+=ji;
		}
	}
	printf("%.14f",sum);
	return 0;
}