"""
2022-03-26 10:41:00
AC
1.0
Accepted | 1 * (1 / 10) | 18 ms | 1596 KB
Accepted | 1 * (1 / 10) | 14 ms | 1596 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 14 ms | 1644 KB
Accepted | 1 * (4 / 10) | 14 ms | 1596 KB

"""

#include<stdio.h>
#include<math.h>
int n;
double e=1,j=1;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		j*=i;
		e+=1/j;
		if(i==18) break;
	}	
	printf("%.14lf",e);
	return 0;
}