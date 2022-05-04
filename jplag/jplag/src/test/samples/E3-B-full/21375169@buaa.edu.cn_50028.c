"""
2022-03-28 22:57:46
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1632 KB
Accepted | 1 * (60 / 100) | 2 ms | 1680 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define pi acos(-1)
#define eps 1e-10
int main(){
	int n,m,sum=0,x,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   
		sum=0; 
		scanf("%d",&x);
		for(m=1;m<=x/2;m++)
		{
			if(x%m==0)
			{
				sum=sum+m;
			}
		}
		if(sum==x)
		{
			printf("YES\n");
		}
		else
		printf("NO\n");
	}
}