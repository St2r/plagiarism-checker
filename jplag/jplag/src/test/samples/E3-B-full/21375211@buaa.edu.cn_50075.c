"""
2022-03-27 09:11:21
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1616 KB
Accepted | 1 * (35 / 100) | 2 ms | 1676 KB
Accepted | 1 * (60 / 100) | 3 ms | 1616 KB

"""

#include <stdio.h>

int main()
{
	int n,i,a,b,x=0,y=0; 
	scanf("%d",&n);
	
	while(n>0)
	{
	scanf("%d",&i);
	a=2;
	x=0;
	
	for(a=2;a<=(i/2);a++)
		{
			if(i%a==0)
			{
			x=a+x
			   ;
			}
		
			}
	if(i==1)
	printf("NO\n");
	else if(i==x+1)
	printf("YES\n");
	else
	printf("NO\n");
	n--;
	}
		
	
	
	return 0;
}