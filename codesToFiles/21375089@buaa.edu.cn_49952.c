"""
2022-03-29 22:37:38
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 0 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (4 / 10) | 1 ms | 1632 KB

"""

#include <stdio.h>
int main(){
	int n,i=1;
	double a=1,b=1,c;
	scanf("%d",&n);
	if(n<19){
	
	while(i<=n){
		a=a*i;
		b=b+1/a;
		i++;
	}printf("%.14f",b);
	
}
else {
	n=19;
		while(i<=n){
		a=a*i;
		b=b+1/a;
		i++;
	}printf("%.14f",b);
}}