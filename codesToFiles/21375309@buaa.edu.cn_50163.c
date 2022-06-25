"""
2022-03-26 16:12:50
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1584 KB
Accepted | 1 * (1 / 4) | 4 ms | 1624 KB
Accepted | 1 * (1 / 4) | 3 ms | 1560 KB
Accepted | 1 * (1 / 4) | 2 ms | 1704 KB

"""

#include<stdio.h>
int main(){
	long long n,i,k;
	double e,b,p;
	scanf("%d",&n);
	e=0;
	i=1;
	if(n<=17){
		while(i<=n){
		k=1;
		p=1;
		while(k<=i){
			p=p*k;
			k++;
		}
		b=1/p;
		e=e+b;
		i++;
	}
	printf("%.14f",1+e);
	}else{
		while(i<=17){
		k=1;
		p=1;
		while(k<=i){
			p=p*k;
			k++;
		}
		b=1/p;
		e=e+b;
		i++;
	}
	printf("%.14f",1+e);
	}
	return 0;
}