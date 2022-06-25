"""
2022-03-26 10:44:04
AC
1.0
Accepted | 1 * (1 / 4) | 7 ms | 1616 KB
Accepted | 1 * (1 / 4) | 2 ms | 1604 KB
Accepted | 1 * (1 / 4) | 3 ms | 1604 KB
Accepted | 1 * (1 / 4) | 11 ms | 1652 KB

"""

#include <stdio.h>

int main(){
	long long n;
	long long ans=1;
	double sum=0.0;
	scanf("%lld",&n);
	if(n<=17){
		for(int i=1;i<=n;i++){
		    ans*=i;
		    sum+=1.0*1/ans;
	    }
	    sum=sum+1;
	    printf("%.14lf",sum);
	}
	else{
		printf("2.71828182845905");
	}
	return 0;
}