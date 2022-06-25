"""
2022-03-29 10:02:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include <stdio.h>
int main(){
	int n, i;
	unsigned long long j;
	double e=1.0;
	scanf("%d", &n);
	i = n;

	if(n<=18){
        while(n>0){
		for(i=n;i>0;i--){
			j*=i;
		    }
		e+=(1.0/j);
		n--;
		i = n;
		j = 1;
	    }
    }
    else if(n>18){
    	n=18;
    	while(n>0){
		for(i=n;i>0;i--){
			j*=i;
		    }
		e+=(1.0/j);
		n--;
		i = n;
		j = 1;
	    }
    }
	printf("%.14f\n", e);
	return 0;
}