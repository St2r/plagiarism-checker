"""
2022-03-26 14:03:43
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include <stdio.h>

int main()
{
	long long n,i,j,num=1;
	double t=1.0;
	scanf("%lld",&n);
	
	if(n<=20){
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				num*=j;			
			}
			t+=1.0/num;
			num=1;
		}
	}else{
		for(i=1;i<=20;i++){
			for(j=1;j<=i;j++){
				num*=j;			
			}
			t+=1.0/num;
			num=1;
		}
	}
	printf("%.14lf",t);	
	return 0;
}