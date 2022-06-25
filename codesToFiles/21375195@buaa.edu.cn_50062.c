"""
2022-03-28 22:30:13
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (4 / 10) | 0 ms | 1688 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	double e=1.0,a=1.0;
	scanf("%d",&n);
	if(n>16){
		printf("2.71828182845905");
		return 0;
	}
	else{
		for(i=1;i<=n;i++){
			a=1.0;
			for(j=i;j>1;j--){
				a*=j; 
			}
			e+=1/a;
		}
	}
	printf("%.14f",e);
	return 0;
}