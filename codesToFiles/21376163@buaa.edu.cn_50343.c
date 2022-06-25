"""
2022-03-27 17:19:00
AC
1.0
Accepted | 1 * (5 / 100) | 7 ms | 1624 KB
Accepted | 1 * (35 / 100) | 8 ms | 1476 KB
Accepted | 1 * (60 / 100) | 11 ms | 1528 KB


"""

#include<stdio.h>
#include <string.h>
#include<math.h>
int main(){
	int n,i,j;
	double a=1,sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=1;
		for(j=1;j<=i;j++){
			a*=j;	
		}
		a=1/a;
		if(a<pow(10,-15)) break;
		sum+=a;
	}
	printf("%.14lf",sum);
	return 0;
}