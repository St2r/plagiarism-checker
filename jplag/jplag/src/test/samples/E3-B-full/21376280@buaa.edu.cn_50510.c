"""
2022-03-26 23:18:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
	int i,j,sum=0,n,a[100]={0};
	scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<a[i];j++)	
		{
				if(a[i]%j==0)
			{
				sum=sum+j;
			}
	    }
		
		if(sum==a[i])
		{
			printf("YES\n");
		}
		if(sum!=a[i])
		{
			printf("NO\n");
		}
		sum=0;
		
	}
	return 0;
}