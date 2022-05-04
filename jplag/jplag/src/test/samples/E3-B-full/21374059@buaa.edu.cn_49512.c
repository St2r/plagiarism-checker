"""
2022-03-26 14:53:11
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1604 KB
Accepted | 1 * (35 / 100) | 2 ms | 1692 KB
Accepted | 1 * (60 / 100) | 12 ms | 1708 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,p=0;
	int i2=0;
	int k[10000],sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(int i1=1;i1<=(a/2);i1++)
		{
		   if(a%i1==0)
		   {
		   	
		   	k[i2]=i1;
		   	i2++;
		   	p++; 
		   }
		}
		for(int i3=0;i3<p;i3++)
		
		{
		sum=sum+k[i3];
		}
		if(sum==a)
		{
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		i2=0;
		sum=0;
		p=0;		
	}
	return 0;
 }