"""
2022-03-27 09:08:31
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1684 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 3 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include<stdio.h>

int main()
{
	int n;
	double e,m;
	e=1;
	m=1;
	scanf("%d",&n);
	if(n<=16){
	    for(int i=1;i<=n;i++){
		    m=m/i;
		    e+=m;
	    }
    }
    else{
    	for(int i=1;i<=17;i++){
		    m=m/i;
		    e+=m;
	    }
	}
	printf("%.14f\n",e);
	return 0;
}