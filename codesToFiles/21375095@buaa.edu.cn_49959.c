"""
2022-03-28 15:07:37
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 3 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include <stdio.h>
int main(){
	int n,i=1;
	double e,trm=1,sum=0;
	scanf("%d",&n);
	if(n>17){
		n=17;
	}
	while(i<=n){
		/*if(1/trm>=1e-14){*/
			trm=trm*i;
		sum=sum+1/trm;
		/*}*/	
		i++;
	}
	e=1+sum;
	printf("%.14f",e);
	return 0;
}