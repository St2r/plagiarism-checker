"""
2022-03-30 15:52:52
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include <stdio.h>
int main(){
	int i,n;
	double outcome,sum=1.0; 
	scanf("%d",&n);
	if(n>17)
	   n=17;
	for(i=1;i<=n;i++){
		sum*=i;
		outcome+=1/sum;
	}
	printf("%.14lf",outcome+1.0);
}