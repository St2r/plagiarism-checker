"""
2022-03-27 01:44:35
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1668 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	double sum=1,k,e=1;
	
	scanf("%d",&n);
	
	if(n<=20){
		for(i=1;i<=n;i++){
			sum = i*sum;
			k = 1 / sum;
		    e = e +k;
		}
		printf("%.14f",e);
		
	}
	else {
		for(i=1;i<=20;i++){
			sum = i*sum;
			k = 1 / sum;
		    e = e +k;
		}
		printf("%.14f",e);
	}
	
	return 0;
 }