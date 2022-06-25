"""
2022-03-28 20:24:09
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (4 / 10) | 1 ms | 1748 KB

"""

#include <stdio.h>
int main()
{
	double e=1,k,n,i,j;
	scanf("%lf",&n);
	if(n<=17){
		for(i=1;i<=n;i++){
			k=1;
		for(j=1;j<=i;j++){
			k*=j;
		}
		e+=1.0/k;
		}}
    else{
    	for(i=1;i<=17;i++){
			k=1;
		for(j=1;j<=i;j++){
			k*=j;
		}
		e+=1.0/k;
	}}
	printf("%.14f",e);		
	
	return 0;
}