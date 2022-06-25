"""
2022-03-28 23:35:28
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 0 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1716 KB

"""

#include<stdio.h>
int main(){
	long long n;
    int i,x;
    double a=1,b,c,sum=1;
	scanf("%lld",&n);
	 for(i=1;i<=n;i++){
	 	for(x=1;x<=i;x++){
	 	a=a*x;
		 }
		 b=a;
		 a=1;
		 c=1/b;
		sum=sum+c;
		if(c<1e-15){
		break;}
	 }
	 printf("%.14f",sum);
	 return 0;
	 
	}