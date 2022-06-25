"""
2022-03-29 22:53:39
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (1 / 10) | 0 ms | 1712 KB
Accepted | 1 * (2 / 10) | 0 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1716 KB

"""

#include <stdio.h>
int main(){
	long long n,i,j;
	double m=1,y,y1,m1=1;

	scanf("%lld",&n);
	
	if(n<=17){
		n=n;
	}else{
		n=17;
	}
	for(i=1;i<=n;i++){
			double x=1;
		
		for(j=1;j<=i;j++){
			x*=j;
			}
//		printf("%lf %d\n",x,z);		
		
		y=1.0/x;
	
//			printf("%lf %lf\n",y,y1);
		m+=y;
	;

	}
	printf("%.14f",m);
	 
	return 0;
	
	
}