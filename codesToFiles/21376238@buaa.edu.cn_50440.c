"""
2022-03-26 13:38:29
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1640 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double sum,r;
	sum=1.0;
scanf("%d",&n);
if(n>17)
printf("2.71828182845905");
else{
for(i=1; i<=n; i++) {
for(r=j=1; j<=i; j++)
r *= j; 
sum += 1.0/r;
}
printf("%.14f",sum);
}
return 0;
}