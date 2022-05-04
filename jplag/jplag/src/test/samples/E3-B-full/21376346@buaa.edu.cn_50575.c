"""
2022-03-27 20:09:52
AC
1.0
Accepted | 1 * (1 / 3) | 2 ms | 1632 KB
Accepted | 1 * (1 / 3) | 2 ms | 1628 KB
Accepted | 1 * (1 / 3) | 2 ms | 1592 KB

B

"""

#include <stdio.h>
int main()
{
	int n,a[1000],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int m=0;m<n;m++)
	{
		for(int b=1;b<a[m];b++)
		{
			if(a[m]%b==0)
			sum=sum+b;
			
			
		}
		if(sum==a[m])
		{
			printf("YES");
			if(m!=n-1)
			printf("\n");
		}
		else
		{
			printf("NO");	
			if(m!=n-1)
			printf("\n");
		} 
	
		sum=0;
	}
	return 0;
}