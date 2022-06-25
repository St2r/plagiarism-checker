"""
2022-03-29 21:08:00
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1636 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double e=0,a,sum;
	scanf("%d",&n);
	if(n>1000){
		printf("2.71828182845905");
	}
	else{
	for(i=0;i<=n;i++){
		sum=1;
		for(a=1;a<=i;a++){
		sum=sum*a;
		}
		e+=1/sum;
	}
	printf("%.14f",e);
}
	return 0;
}