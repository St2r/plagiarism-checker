"""
2022-03-26 17:09:47
AC
1.0
Accepted | 1 * (1 / 10) | 10 ms | 1656 KB
Accepted | 1 * (1 / 10) | 11 ms | 1620 KB
Accepted | 1 * (2 / 10) | 11 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (4 / 10) | 11 ms | 1688 KB

"""

#include <stdio.h>
int main()
{
	double q,p, e,r,s,n,i; 
	scanf ("%lf",&n);
	q=0;
	if(n<=17){
		for (p=1;p<=n;p++){	
				s=1;
			for(i=1;i<=p;i++){
				s=s*i;
				r=1/s;
			}
			q+=r;
		}
	}else{
		for (p=1;p<=17;p++){	
			s=1;
			for(i=1;i<=p;i++){
				s=s*i;
				r=1/s;
			}
			q+=r;
		}
	}
	e=q+1;
	printf("%.14f",e);
	return 0;
}