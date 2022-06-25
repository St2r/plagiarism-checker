"""
2022-03-29 08:30:57
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1668 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1752 KB

"""

#include<stdio.h>
int main(){
	double n,i,j,k,h;
	double e=1,jc2=1,jc1=1;
	scanf("%lf",&n);
	if(n>=17){
		n=17;
	}
	for(k=1;k<=n;k++){
		jc2=1;
		for(h=1;h<=k;h++){
			jc2*=h;
		}
		e+=1/jc2;
	}
	printf("%.14f\n",e);
	return 0;
}