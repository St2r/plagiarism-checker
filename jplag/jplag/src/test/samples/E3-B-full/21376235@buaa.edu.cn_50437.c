"""
2022-03-29 23:33:39
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 2 ms | 1744 KB

"""

#include<stdio.h> 
int main()
{
	int i,n,j;
	int a[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{  
		scanf("%d",&a[i]);}
			for(i=0;i<n;i++)
			{int sum=0;
		for(j=1;j<a[i];j++)
	{   
		if(a[i]%j==0)
	sum=sum+j;
}
	if(sum==a[i])
	printf("YES\n");
	else
	printf("NO\n");
	}
	return 0;
}