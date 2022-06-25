"""
2022-03-26 10:55:02
AC
1.0
Accepted | 1 * (1 / 10) | 13 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1596 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (4 / 10) | 2 ms | 1596 KB


"""

#include<stdio.h>
int main(){
	int n,i;
	double e=1,e0=2.71828182845905,q=1;
	scanf("%d",&n);
	if(n<17){
		for(i=1;i<=n;i=i+1){
		    q=q*i;
		    e=e+1/q;
	    }  
	}
	else{
		e=e0;
	}
	printf("%.14f",e);
	return 0;
}