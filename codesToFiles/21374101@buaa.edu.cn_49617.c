"""
2022-03-29 20:11:48
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (1 / 10) | 0 ms | 1644 KB
Accepted | 1 * (2 / 10) | 0 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1584 KB

"""

#include<stdio.h>

int main(){
	int n,r,i;
	double gcb=1;
	long long int sum=1;
	scanf("%d",&n);
    if(n<=17){
	
	for(r=1;r<=n;r++){
		sum=1;
		for(i=1;i<=r;i++){
			sum=sum*i;

		}
		gcb=gcb+(1.0/sum);
	}
	printf("%.14lf",gcb);
	}
	
	else printf("2.71828182845905");
	
	
	
	
	
	return 0;
}