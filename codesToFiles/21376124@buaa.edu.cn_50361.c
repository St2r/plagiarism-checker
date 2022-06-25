"""
2022-03-27 17:43:45
AC
1.0
Accepted | 1 * (1 / 10) | 14 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 13 ms | 1704 KB
Accepted | 1 * (2 / 10) | 14 ms | 1604 KB
Accepted | 1 * (4 / 10) | 13 ms | 1560 KB

"""

#include <stdio.h>

int main()
{
	int n,i,k;
	double bot;
	double e=1;
	
	scanf("%d",&n);
	if(n<=16){
	for(i=1;i<=n;i++){
		bot=1.0;
		for(k=1;k<=i;k++){
				bot*=k*1.0;
				
			}
		
		e+=1/bot;
	}
		printf("%.14lf",e);
	}
	else{
	printf("2.71828182845905",e);
	}


	return 0;
}