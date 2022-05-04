"""
2022-03-26 12:04:47
AC
1.0
Accepted | 1 * (1 / 4) | 8 ms | 1668 KB
Accepted | 1 * (1 / 4) | 9 ms | 1644 KB
Accepted | 1 * (1 / 4) | 9 ms | 1672 KB
Accepted | 1 * (1 / 4) | 9 ms | 1628 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i,j;
	int a,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&a);
		for(j=1;j<a/2+1;j++)
		{
			if(((a%j)==0)&&a!=j)
			{
				sum=sum+j;
			}
		
		}
	if(a==sum)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	}
	
	return 0;
 }