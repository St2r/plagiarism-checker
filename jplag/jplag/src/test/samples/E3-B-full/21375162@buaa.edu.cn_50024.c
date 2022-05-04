"""
2022-03-29 23:09:07
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1676 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 1 ms | 1652 KB

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
	int m,n,sum=0,a,i; 
	scanf("%d",&m); 
	for(i=0;i<m;i++) 
	{ 
		sum=0; 
		scanf("%d",&a); 
		for(n=1;n<=a/2;n++) 
		{ 
			if(a%n==0) 
			{ 
				sum=sum+n; 
			} 
		} 
		if(sum==a) 
		{ 
			printf("YES\n"); 
		} 
		else printf("NO\n"); 
	} 
}