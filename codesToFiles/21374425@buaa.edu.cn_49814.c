"""
2022-03-27 19:44:31
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1704 KB
Accepted | 1 * (1 / 4) | 3 ms | 1544 KB
Accepted | 1 * (1 / 4) | 2 ms | 1632 KB
Accepted | 1 * (1 / 4) | 3 ms | 1632 KB

"""

#include <stdio.h>
int main(){
	double e=0;
	int n,i,j,k=1,h=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i<=17){
			for(j=1,k=1;(j<=i)&&j<=17;j++){
				k*=j;
			}
			e+=1.0/k;
		}
	}
	printf("%.14lf",1+e);
	return 0;
}