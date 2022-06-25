"""
2022-03-29 12:25:24
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1588 KB

"""

#include<stdio.h>
int main()
{
	int n,i=1,j=1;
	double x=1,sum=0;
    scanf("%d",&n);
	if(n<30){
	    while(i<=n){
		    while(j<=i){
			    x=x*j;
			    j = j + 1;
		    }
		sum = sum + 1/x; 
		i = i +1;
	    }
	printf("%.14f",sum+1);
    }
    else{
    	printf("2.71828182845905");
	}
 }