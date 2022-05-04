"""
2022-03-26 15:36:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1556 KB

"""

#include<stdio.h>
int main()
{
	int n,a,b,i,count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{count=0;
		scanf("%d",&a);
	for(b=1;b<a/2+1;b++)
	{
		if(a%b==0)
		count=count+b;
		
			
	}
	if(count==a)
	printf("YES\n");
	else
	printf("NO\n");
	}
	return 0;
	
}