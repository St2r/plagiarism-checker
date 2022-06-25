"""
2022-03-28 21:09:54
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 0 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include <stdio.h>
int main(){
	int a, i, j;
	double b=1, c=1;
	scanf("%d", &a);
	if(a>16)
	   a=17;
	for(i=1;i<=a;i++){
		for(j=i;j>0;j--){
			b=b/j;
		}
		c=c+b;
		b=1;
	}
	printf("%.14f",c);
}