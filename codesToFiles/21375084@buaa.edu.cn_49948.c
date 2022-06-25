"""
2022-03-28 23:54:05
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1664 KB
Accepted | 1 * (1 / 10) | 1 ms | 1668 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1632 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include<stdio.h>
int main()
{
    long long n,i,jie=1;
    double sum=1;
    scanf("%lld",&n);
    if(n>20){
    	printf("2.71828182845905\n");
	}
	else{
		for(i=1;i<=n;i++){
    	   jie*=i;
    	   sum=sum+(double)1/jie;
	    }
	    printf("%.14lf\n",sum);
	}
    
    return 0;
}