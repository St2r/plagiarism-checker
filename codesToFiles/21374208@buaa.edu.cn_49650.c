"""
2022-03-27 14:28:29
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 6 ms | 1660 KB
Accepted | 1 * (2 / 10) | 5 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB
Limit Exceed | 0 * (1 / 105) | 1000 ms | 1652 KB
Wrong Answer | 0 * (1 / 105) | 163 ms | 1692 KB
Wrong Answer | 0 * (1 / 105) | 10 ms | 1660 KB
Wrong Answer | 0 * (1 / 105) | 137 ms | 1688 KB

"""

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double i=1,j,k,m=1;
	if(n>17)
	n=17;
	
	for(j=1;j<=n;j++){
		
		m=1;
		for(k=1;k<=j;k++){
		m=m*(1/k);
		}
		i=i+m;
	}
	
	printf("%.14f",i);


	
	return 0;
}