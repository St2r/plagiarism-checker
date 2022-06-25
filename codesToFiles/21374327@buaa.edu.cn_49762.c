"""
2022-03-26 17:48:38
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1644 KB
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 3 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1688 KB

"""

#include<stdio.h>
int main(){
	int n;
	double e=1,m=1.0;
	scanf("%d",&n);
	if(n>=40){
		n=40;
	}
	for(int i=1;i<=n;i++){
		m*=i;
		e+=1/m;
	}
	printf("%.14f",e);
	return 0;
}