"""
2022-03-26 16:21:42
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB
Accepted | 1 * (1 / 4) | 3 ms | 1612 KB
Accepted | 1 * (1 / 4) | 4 ms | 1628 KB
Accepted | 1 * (1 / 4) | 3 ms | 1544 KB


"""

#include <stdio.h>
int main(){
	int  n;
 double e=1.0;
	scanf("%d",&n);
	if(n>=20)
			n=20;
	for(int i=1,j=1;i<=n;i++){
		j*=i;
		e+=1/(1.0*j);
	}
	printf("%.14lf",e);


	return 0;
}