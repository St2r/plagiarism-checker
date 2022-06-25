"""
2022-03-26 15:24:46
AC
1.0
Accepted | 1 * (1 / 4) | 14 ms | 1596 KB
Accepted | 1 * (1 / 4) | 19 ms | 1644 KB
Accepted | 1 * (1 / 4) | 5 ms | 1648 KB
Accepted | 1 * (1 / 4) | 3 ms | 1696 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
double fac(double n){
	double a=1.0;
	for(double i=n;i>0;i--){
		a*=i;
	}
	return a;
}
int main()
{
	int n;
	scanf("%d",&n);
	double e=1.0;
	
	
	for(double i=1.0;i<=n;i++){
		
		
		e+=1.0/fac(i);
	}


	printf("%.14f",e);
	return 0;
}