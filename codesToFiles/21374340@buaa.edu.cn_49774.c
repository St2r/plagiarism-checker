"""
2022-03-26 14:56:50
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	int n,i,r;
    long long p=1;
	double d=1.0;
	scanf("%d",&n);
	for(i=0;i<n&&i<20;i++){
		    p=p*(i+1);
			d=d+1.0/p;
		}
		printf("%.14lf",d);
		return 0; 
}