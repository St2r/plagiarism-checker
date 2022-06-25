"""
2022-03-29 18:25:42
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main(){
 	int n;
	 double l=1,c=1;
 	scanf("%d",&n);
 	if(n>17)n=17;
 	int i,j;
 	for(i=1;i<=n;i++){
 		for(l=1,j=1;j<=i;j++){
 			l*=1.0/j;
		 }
		c+=l;
	 }
	printf("%.14lf",c);

return 0;}