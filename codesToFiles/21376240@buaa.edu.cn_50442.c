"""
2022-03-26 10:54:39
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 15 ms | 1656 KB
Accepted | 1 * (2 / 10) | 9 ms | 1652 KB
Accepted | 1 * (2 / 10) | 9 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB
KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main(){
	int n;
	int i,j=1;
	double a[1005],sum=0;
	for(i=0;i<1005;i++){
		a[i]=1;
	}
	scanf("%d",&n);
	for(j=1;j<1000 && j<=n;j++){
		for(i=1;i<=j;i++){
			a[j]*=(double)1/i;
		}
	}
	for(;j>0;j--){
		sum+=a[j];
	}
	printf("%.14f",sum);
	
return 0;
}