"""
2022-03-26 15:04:10
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1612 KB
Accepted | 1 * (1 / 4) | 10 ms | 1688 KB
Accepted | 1 * (1 / 4) | 5 ms | 1608 KB
Accepted | 1 * (1 / 4) | 4 ms | 1588 KB

"""

#include<stdio.h>

int main()

{
	int n,x = 1;
	double e = 1,eps =1e-14;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		x = x*i;
		if((1.0/x)>eps){
			e = e+1.0/x;
		}
		else{
			break;
		}
	}
	printf("%.14f",e); 
	return 0;
}