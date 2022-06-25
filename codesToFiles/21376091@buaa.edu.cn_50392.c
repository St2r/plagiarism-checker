"""
2022-03-29 09:50:50
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 0 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Accepted | 1 * (4 / 10) | 1 ms | 1664 KB

"""

#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	int n, i, j;
	double e = 1.0;
	double deno = 1.0;
	scanf("%d",&n);
	if(n < 18){
	    for(i = 1;i <= n;i++){
	    	deno /= (1.0 * i);
	    	e += deno;
	    }	
	}
	else{
		for(i = 1;i <= 17;i++){
		    deno /= (1.0 * i);
		    e += deno;
	    }
	}
	printf("%.14f",e);
	return 0;
}