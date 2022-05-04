"""
2022-03-25 15:58:30
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 5 ms | 1640 KB
Accepted | 1 * (60 / 100) | 4 ms | 1600 KB

"""

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{	
	int n,in,i,sum;
	scanf("%d",&n);
	if(n<1||n>100) abort();
	while(n--)
	{
		scanf("%d",&in);
		if(in<1||in>10000) abort();
		sum=0;
		for(i=1;i<in;i++)
		{
			if(in%i==0) sum+=i;
		}
		if(sum==in) printf("YES\n");
		else printf("NO\n");
	}
	return 0; 
}