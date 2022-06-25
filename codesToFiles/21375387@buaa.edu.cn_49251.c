"""
2022-03-26 16:35:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1548 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1556 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include <stdio.h>
int main()
{
	int n;
	unsigned long long k,qi=0;
	double e=1.0;
	scanf("%d",&n);
	if(n>16){
		n=17;
	}
	for(int i=n;i>=1;i--){
		//TODO
		k=1;
		for(int t=n;t>=i+1;t--){
			//TODO
			k=k*t;
		}
		qi=qi+k;
	}
	e=e+(1.0*qi)/k;
	printf("%.14f",e);
	return 0;
}