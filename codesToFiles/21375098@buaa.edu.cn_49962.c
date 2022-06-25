"""
2022-03-26 12:14:47
AC
1.0
Accepted | 1 * (1 / 4) | 8 ms | 1640 KB
Accepted | 1 * (1 / 4) | 8 ms | 1648 KB
Accepted | 1 * (1 / 4) | 9 ms | 1608 KB
Accepted | 1 * (1 / 4) | 4 ms | 1644 KB
KB

"""

#include <ctype.h>
#include <stdio.h> 
#include <math.h> 
#include <string.h>
int main(){
	int n,i=1;
	double e=1,s=1;
	scanf("%d",&n);
	while(i<=n){
	if(1/s>=1e-14){
		e+=1/s;
		i++;
		s*=i;
	}
}
printf("%.14f\n",e);
}