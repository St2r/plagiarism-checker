"""
2022-03-26 09:24:18
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 2076 KB
Accepted | 1 * (35 / 100) | 3 ms | 2060 KB
Accepted | 1 * (60 / 100) | 3 ms | 2076 KB


"""

#include<stdio.h>

int main(){
	int n,i,j,a[1000],b[1000]={0},k,sum=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				b[j]=j;
			}
		}
		
		for(k=1;k<a[i];k++)
		{
			sum=sum+b[k];
		}
		
		if(sum==a[i])
		printf("YES\n");
		else
		printf("NO\n");
		
		sum=0;
		for(k=0;k<a[i];k++)
		{
			b[k]=0;
		}
		
	}
	return 0;
	
	
}