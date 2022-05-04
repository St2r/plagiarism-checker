"""
2022-03-29 22:23:12
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1740 KB

"""

#include<stdio.h>
int main()
{
	int i,n,x;
	scanf("%d",&n);
	while (n--)
	{
		int s=0;
		scanf("%d",&x);
		for(i=1;i<x;i++)
		{
			if(x%i==0){
				s+=i;
			}
		}
		if(s==x){
			printf("YES\n");
			
		}else {
			printf("NO\n");
		}
		
	}
	return 0;
}