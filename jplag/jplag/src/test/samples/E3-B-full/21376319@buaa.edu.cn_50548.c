"""
2022-03-29 20:43:38
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1728 KB

"""

#include<stdio.h>
int main() 
{
	int i,j,a,n;
	int count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for(j=1;j<=a;j++)
	   {
	   	    if(a%j==0)
	   	    count+=j;
	   	    else
	   	    count+=0;
		} 
		if(count==(2*a))
		printf("YES\n");
	   	else
	   	printf("NO\n");
	   	count=0;
   }		
	return 0;	
}