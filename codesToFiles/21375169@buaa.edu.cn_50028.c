"""
2022-03-29 14:33:33
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 0 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define pi acos(-1)
#define eps 1e-10
int main(){
	int n;
	scanf("%d",&n);
	double m=1,e=1,i;
	if(n==1)
	printf("2.00000000000000");
	else{
	if(n<=17)
	{
	for(i=2;i<=n+1;i++)
	{
		m=m/(i-1);
		e=e+m;
		
		
	 } 
	 printf("%.14f",e) ;}
	else
	printf("2.71828182845905");
	 }
}