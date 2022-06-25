"""
2022-03-26 10:11:21
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 3 ms | 1652 KB


"""

#include <stdio.h>
int main ()
{
	double sum=1,k=1.0;
	int n,i,j;
	scanf("%d",&n);
	if(n>=20){
		n=20;
	}
	for(i=1;i<=n;i++){
		k=1.0;
		for(j=1;j<=i;j++){
			k*=j;
		}
		 sum+=1.0/k;
	}
	printf("%.14lf",sum);
	
	
	return 0;
 }