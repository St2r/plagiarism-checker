"""
2022-03-27 23:44:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB

"""

#include<stdio.h>
int main(){
	int n,i,a;
	double b,k,c=1;
	scanf("%d",&n);
	if(n<=16){
	for(i=1;i<=n;i++){
		for(a=b=1;a<=i;a++){
			b=b*a;
			k=1/b;
			
		}
		c=c+k;
		
		
	}
	printf("%.14f",c);}
	else{
		printf("2.71828182845905");
	}
	
		return 0;
	}