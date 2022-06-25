"""
2022-03-29 23:47:46
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include<stdio.h> 
#include<math.h> 
#include<ctype.h> 
#include<string.h> 
#include<stdlib.h> 
#define pi acos(-1) 
#define eps 1e-10 
int main()
{ 
	int n; 
	scanf("%d",&n); 
	double a=1,e=1,i; 
	if(n==1) 
	printf("2.00000000000000"); 
	else
	{ 
		if(n<=17) 
		{ 
			for(i=2;i<=n+1;i++) 
			{ 
				a=a/(i-1); 
				e=e+a; 
			} 
			printf("%.14f",e) ;
		} 
		else printf("2.71828182845905"); 
	} 
}