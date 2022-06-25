"""
2022-03-26 22:52:42
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include<stdio.h>
int main(){
	int n,i,j;
	double e=1,k=1;
	scanf("%d",&n);
	for(i=1;i<=20;i++){
		for(j=i;j>=1;j--){
			k*=j;
		}
		k=1.0/k;
		e+=k;
		k=1;
		if(i==n){
			break;
		}
	} 
	printf("%.14f",e);
	return 0;
}