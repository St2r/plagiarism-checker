"""
2022-03-27 09:16:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 6 ms | 1644 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 6 ms | 1704 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double e=1,j=1;
	scanf("%d",&n);
	if(n<=20){
		for(i=1;i<=n;i++){
			j*=i;
			e+=(1/j);
		}
		printf("%.14f",e);
	}
	else{
		for(i=1;i<=20;i++){
			j*=i;
			e+=(1/j);
	    }
	    printf("%.14f",e);
   } 
	return 0;
}