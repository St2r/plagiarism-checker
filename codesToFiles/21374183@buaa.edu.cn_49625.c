"""
2022-03-29 19:59:22
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 3 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int n,i;long long s=1,h;double sum=1.0,a;
	scanf("%d",&n);
   if(n<=37){
		for(h=1;h<=n;h++)
	{
		s=1;
		for(i=1;i<=h;i++)
		{
			s*=i;
		    
		}
		a=1/(1.0*s);
	   sum+=a;
	}printf("%.14f",sum);
	
	}else
	{
		for(h=1;h<=37;h++)
	{
		s=1;
		for(i=1;i<=h;i++)
		{
			s*=i;
		    
		}
		a=1/(1.0*s);
	   sum+=a;
	}printf("%.14f",sum);
	}
	
}