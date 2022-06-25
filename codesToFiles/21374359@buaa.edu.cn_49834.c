"""
2022-03-26 08:40:17
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 5 ms | 1672 KB
Accepted | 1 * (1 / 4) | 8 ms | 1668 KB
Accepted | 1 * (1 / 4) | 3 ms | 1656 KB

KB

"""

#include<stdio.h>

int main()
{
int n;
double result=1;
scanf("%d",&n);
int a=1;
for(int i=1;i<=n;i++){a=1;
	for(int j=1;j<=i;j++){
		
	a=a*j;
	}
	result=result+1.0/a;
}
printf("%.14lf",result);
 }