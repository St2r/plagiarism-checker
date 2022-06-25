"""
2022-03-26 15:24:30
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1652 KB
Accepted | 1 * (1 / 4) | 2 ms | 1708 KB
Accepted | 1 * (1 / 4) | 2 ms | 1592 KB
Accepted | 1 * (1 / 4) | 11 ms | 1716 KB

"""

#include<stdio.h>
int main()
{
	double n=0,i=0,j=0,m=1,t=1;
	scanf("%lf",&n);
	if(n<17){
		for(i=1;i<n+1;i++){
			m*=i;
			t+=1/m;
		}	
		printf("%.14lf",t);
	}else{
		printf("2.71828182845905");
	}

	return 0;
}