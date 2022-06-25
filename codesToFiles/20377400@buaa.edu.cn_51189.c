"""
2022-03-27 13:02:59
AC
1.0
Accepted | 1 * (5 / 100) | 7 ms | 1524 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 5 ms | 1648 KB

B

"""

#include<stdio.h>

int main(){
	int n;
	double e=1.0,f=1.0,lim=1e-15;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		f/=i;
		e+=f;
		if(f<lim) break;
	}
	printf("%.14f",e);
}