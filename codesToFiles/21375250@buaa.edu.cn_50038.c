"""
2022-03-27 21:22:38
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include <stdio.h>
int main(){
	int n;
	double i, j=1, en=1;
	scanf("%d", &n);
	if(n<=21){
	
	for(i=1;i<=n;i++){
		j/=i;
		en+=j;
	}
	printf("%.14lf",en);}
	else{
		printf("2.71828182845905");
	}
	return 0;
}