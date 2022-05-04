"""
2022-03-26 19:18:05
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 4 ms | 1620 KB

"""

#include<stdio.h>
int main()
{
	int n,a[100],i,k,sum=0,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%d\n",&a[i]);
		for(k=0;k<n;k++)
		{
		
		for(j=1;j<a[k];j++)
		{
			if(a[k]%j==0)
			
				sum=sum+j;
		    else
		    sum=sum;
		}
		if(a[k]==sum)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
}
	
	return 0;
}