"""
2022-03-27 18:24:25
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 2 ms | 1624 KB

"""

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,j;
	double a=1,b=1;
	scanf("%d",&n);
	if(n>=20){
		printf("2.71828182845905");
	}
	else{
	for(i=1;i<=n;i++){
		for(j=i;j>0;j--)
		{
		b=b/j;
		}
        a=a+b;
		 b=1;  
	}
	printf("%.14f",a);
	}
}