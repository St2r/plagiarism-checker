"""
2022-03-27 23:37:21
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1928 KB
Accepted | 1 * (35 / 100) | 3 ms | 2048 KB
Accepted | 1 * (60 / 100) | 3 ms | 2056 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,i,j;
	int sum=0;
	scanf("%d",&n);
	for(i=0,sum=0;i<n;i++)
	{
		scanf("%d",&a);
		for( j=1;j<=sqrt(a);j++)
		{
			
		  if(a%j==0)
		  {
		  	if(j*j==a)
		  	{
		  		sum=sum+j;
			  }
			  else
			  {
			  sum=j+a/j+sum;
		      }
		  }
	    }
	    sum=sum-a;
	    
	if(sum==a)
	printf("YES\n");
	else
	printf("NO\n");	
    sum=0;
	}
	return 0;
}