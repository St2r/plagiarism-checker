"""
2022-03-26 13:15:40
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 3 ms | 1552 KB

"""

#include<stdio.h>
int main()
{
	int n,x,i,j,sum=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		for(j=1;j<=x/2;j++)
		{
			if(x%j==0)
				{sum=sum+j;}
			
		}
		
		if(sum==x)
			{printf("YES\n");}
		
		else
			{printf("NO\n");}
		sum=0;
	}
	return 0;
}