"""
2022-03-26 08:16:04
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	double as,a=1,j=1;
	scanf("%d",&n);
	for(i=1;i<n+1&&i<=18;i++){
		
		j=j/i;
		a+=j;
	}
	printf("%.14f",a);
	return 0;
}