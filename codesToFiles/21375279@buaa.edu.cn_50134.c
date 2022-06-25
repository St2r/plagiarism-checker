"""
2022-03-26 19:41:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (4 / 10) | 2 ms | 1680 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	int a,i;
	double b,c,sum=1;
	scanf("%d",&a);
	if (a>16) a=17;
	for (i=1;i<=a;i++){
		c=1;
		for (b=1;b<=i;b++){
			c*=b;
		}
		sum+=1.0/c;
	}
	printf("%.14lf",sum);
	return 0;	
}