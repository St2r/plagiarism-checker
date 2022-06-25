"""
2022-03-27 11:49:26
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 9 ms | 1640 KB
Accepted | 1 * (60 / 100) | 5 ms | 1652 KB

"""

#include <stdio.h>
int main(){
	int n,i,k;
	long long int Fac_i;
	double e=1;
	scanf("%d",&n);
	
	if(n>16){
		n=17;
	}
	
	for(i=1;i<=n;i++){
		k=1;
		Fac_i=1;
		for(k=1;k<=i;k++){
			Fac_i*=k;
		}
		e+=1.0/Fac_i;
	}
	
	printf("%.14f",e);
	
	return 0;
}