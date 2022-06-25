"""
2022-03-29 18:57:44
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 0 ms | 1584 KB

"""

#include<stdio.h>
int main(){
	int n,i;
	double e=1,m=0;
	scanf("%d",&n);
	if(n<=16){
	
	for(i=1;i<=n;i++){
		e=e/i;
		m=m+e;
	}
	printf("%.14f",m+1);
}
    else if(n>16)
       printf("2.71828182845905\n");
	return 0;
}