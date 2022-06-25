"""
2022-03-28 20:52:06
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include <stdio.h>
int main(){
	double e=1.0;
	int n;
	long long k;
	scanf("%d",&n);
if(n<=20){
	for(int i=1;i<=n;i++){
		k=1;
		for(int j=1;j<=i;j++){
		  
			k=k*j;
			
		}
		e=e+1.0/k;
		
	}}
else {
	n=20;
	for(int i=1;i<=n;i++){
		k=1;
		for(int j=1;j<=i;j++){
		  
			k=k*j;
			
		}
		e=e+1.0/k;
		
}}
	printf("%.14f",e);
	return 0;}