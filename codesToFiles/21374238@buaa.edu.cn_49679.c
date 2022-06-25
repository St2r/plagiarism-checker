"""
2022-03-28 16:10:25
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 3 ms | 1640 KB

"""

#include <stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	double e=1,x=1;
	if(n<=17){
		for(i=1;i<=n;i++){
		x*=i;
		e+=1/x;
	} 
	printf("%.14f",e);
	}
	else
	printf("2.71828182845905\n");
	return 0;
}