"""
2022-03-26 15:12:45
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 3 ms | 1652 KB
Accepted | 1 * (2 / 10) | 5 ms | 1644 KB
Accepted | 1 * (4 / 10) | 2 ms | 1620 KB
KB

"""

#include<stdio.h>
int main(){
	int n, i, div;
	double  Lilsum=1.00000000000000, Finalsum=1.00000000000000;
	scanf("%d",&n);
	if(n>20){
		n=20;
	}
	for(i=1; i<=n; i++){	
		for(div=1; div<=i; div++){
			Lilsum = 1.00000000000000*div*Lilsum;
		}
		Finalsum = Finalsum + 1/Lilsum;
		Lilsum = 1.00000000000000;
	}
	printf("%.14f", Finalsum);
	return 0;}