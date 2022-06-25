"""
2022-03-29 12:35:34
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (4 / 10) | 0 ms | 1688 KB

"""

#include<stdio.h>
int main(){
	int n,i;
	double e=1.0,b=1;
	scanf("%d",&n);
	if(n<16){
	for(i=1;i<=n;i++){
		b=b*i;
		e=e+1.0/b;
	}
	printf("%.14f",e);
}
    else
    printf("2.71828182845905");
	return 0;
}