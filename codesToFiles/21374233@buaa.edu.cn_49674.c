"""
2022-03-26 11:06:30
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1652 KB
Accepted | 1 * (1 / 10) | 11 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (4 / 10) | 12 ms | 1648 KB

"""

#include<stdio.h>

int main(){
	int n,i;
    double e=1.0,r=1.0;
    scanf("%d",&n);
    for(i=1;i<=(n<=17?n:17);i++){
        r*=i;
        e = e + 1.0/r;
    }
    printf("%.14f",e);
	return 0;
}