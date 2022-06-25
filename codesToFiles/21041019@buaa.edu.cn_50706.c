"""
2022-03-26 20:05:43
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1644 KB
Accepted | 1 * (1 / 4) | 2 ms | 1636 KB
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1636 KB

"""

#include <stdio.h>
int main(){
	double n,a,b=0,c=1;
	scanf("%lf",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			c=j*c;
		}
		a=1/c;
		b=b+a;
		c=1;
		if(i>17){
			break;
		}
	}
	printf("%.14lf",b+1);
	return 0;
}