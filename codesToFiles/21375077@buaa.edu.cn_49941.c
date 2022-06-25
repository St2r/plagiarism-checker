"""
2022-03-27 01:07:17
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 10 ms | 1668 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>//注意：这些header会增加运行时间，如果不要用，尽量删掉防止出现TLE 
int main(){
	int n,i,j;
	scanf("%d",&n);
	double sum=1;
	double mu=1;
	if(n<=17){
		for(i=1;i<=n;i++){
		for(j=i;j<=i;j++){
		    mu*=i;		
	}
	          sum+=(1.0/mu);
	}
	printf("%.14f",sum);
	}else{
		
		printf("%.14f",2.71828182845905);
	}
	
	
	
	
	return 0;
}