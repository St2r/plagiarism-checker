"""
2022-03-26 15:45:33
AC
1.0
Accepted | 1 * (3 / 5) | 2 ms | 1648 KB
Accepted | 1 * (1 / 5) | 2 ms | 1604 KB
Accepted | 1 * (1 / 5) | 3 ms | 1628 KB

(60 / 100) | 1000 ms | 824 KB

"""

#include<stdio.h>

int main()
{
	int n,i;
	double sum=1.0,j=1;
	scanf("%d",&n);
	if(n<=17){
	n=n;
}	else n=17;
	for(i=1;i<=n;i++){
	j=j*i;
	sum=sum+1.0/j;
}   printf("%.14lf",sum);
	
	
}