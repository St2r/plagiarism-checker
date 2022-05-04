"""
2022-03-27 11:30:06
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1636 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include<stdio.h>
int main()
{
	int n,a[105],i,j,k,sum=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		for(k=1;k<a[j];k++)
		{
			if((a[j]%k)==0)
			sum+=k; 
		}
		if(sum==a[j])
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	} 
	return 0;
}