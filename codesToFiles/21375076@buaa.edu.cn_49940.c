"""
2022-03-26 15:30:39
AC
1.0
Accepted | 1 * (1 / 4) | 4 ms | 1632 KB
Accepted | 1 * (1 / 4) | 2 ms | 1592 KB
Accepted | 1 * (1 / 4) | 4 ms | 1652 KB
Accepted | 1 * (1 / 4) | 9 ms | 1708 KB
0 KB
Accepted | 1 * (4 / 10) | 16 ms | 1560 KB

"""

#include<stdio.h>
int main()
{
	
	double s=1;
	const double a=1e-16;
	double x=1;
	int i=1;
	int n;
	scanf("%d",&n);
	if(n<=19){
	
	for(i=1;i<=n;i++){
		s=1.0*s/i;
	
		x=x+s;
	
	}
    }else{
    	for(i=1;i<=19;i++){
    		s=1.0*s/i;
    		x=x+s;
		}
	}
	printf("%.14f",x);
	return 0;
}