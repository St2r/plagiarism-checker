"""
2022-03-29 19:33:59
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 0 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 0 ms | 1656 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
long long n,s;
double e,f;
e=0;
scanf("%lld",&n);
if(n<=20){
for(int j=1;j<=n;j++){
	s=1;
for(int i=1;i<=j;i++){
	s=s*i;
}
f=(double)(1.00000000000000*1/s);
e=e+f;
}
printf("%.14lf",e+1);}
	else{
		printf("2.71828182845905\n");
	}
	return 0;
}