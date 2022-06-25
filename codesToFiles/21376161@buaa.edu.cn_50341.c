"""
2022-03-26 09:18:48
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1600 KB
Accepted | 1 * (1 / 4) | 2 ms | 1596 KB
Accepted | 1 * (1 / 4) | 8 ms | 1660 KB
Accepted | 1 * (1 / 4) | 12 ms | 1660 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    unsigned long long int n,i=1,k=1,p=1;
    double e=1.0,b;
    scanf("%u",&n);
    while(k<=n || k<=17){
        while(i<=k){
    	p=p*i;
    	i++;
    	b=1.0/p;  
		e=e+b;
	    }
		k++;  	
	}
printf("%.14lf",e);
	return 0;
}