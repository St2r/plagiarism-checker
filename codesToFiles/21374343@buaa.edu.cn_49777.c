"""
2022-03-27 16:16:03
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1552 KB
Accepted | 1 * (1 / 10) | 2 ms | 1540 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (2 / 10) | 2 ms | 1552 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	double sum=1.0;
	if(n>=18){
		for(i=1;i<=18;i++){
		int j,fm=1;
		for(j=i;j>0;j--){
			fm*=j;
		}
		sum=sum+1.0/fm;
	    } 
	    printf("%.14f",sum);
	}
	else{
		for(i=1;i<=n;i++){
		int j,fm=1;
		for(j=i;j>0;j--){
			fm*=j;
		}
		sum=sum+1.0/fm;
	    } 
	    printf("%.14f",sum);
	}
	
	return 0;
}