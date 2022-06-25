"""
2022-03-26 11:33:57
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1596 KB
Accepted | 1 * (1 / 10) | 14 ms | 1652 KB
Accepted | 1 * (2 / 10) | 12 ms | 1656 KB
Accepted | 1 * (2 / 10) | 14 ms | 1592 KB
Accepted | 1 * (4 / 10) | 14 ms | 1656 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(){
	long long n,jie=1;
	double e=1.0;
	
	scanf("%lld",&n);
	
	if(n>=19){
		printf("2.71828182845905");
	}else {
		for(int i=1;i<=n;i++){
			jie=1;
			for(int j=1;j<=i;j++){
				jie*=j;
			}	e+=1.0/jie;
		}
		printf("%.14lf",e);
	}
	return 0;
}