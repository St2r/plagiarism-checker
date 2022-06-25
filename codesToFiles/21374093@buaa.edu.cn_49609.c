"""
2022-03-27 09:04:05
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 7 ms | 1676 KB
Accepted | 1 * (4 / 10) | 8 ms | 1664 KB

"""

#include <stdio.h>

int main()
{
	int i,n,j=1;
	double a=1,m=1;
	scanf("%d",&n);
	if(n<100){
	for(i=1;i<=n;i++){
		m=1;
		for(j=1;j<=i;j++){
			m=m*j;
			
		}
		a=a+1.0*(1.0/m);
	}
	
		printf("%.14f",a);
	}else{for(i=1;i<=1000;i++){
		m=1;
		for(j=1;j<=i;j++){
			m=m*j;
		
		}a=a+1.0*(1.0/m);
	}
	
	printf("%.14f",a);

	
	}
	return 0;
}