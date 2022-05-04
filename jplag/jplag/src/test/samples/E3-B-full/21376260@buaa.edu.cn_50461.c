"""
2022-03-27 17:02:27
PE
0.0
Presentation Error | 0 * (5 / 100) | 2 ms | 1548 KB
Presentation Error | 0 * (35 / 100) | 3 ms | 1628 KB
Presentation Error | 0 * (60 / 100) | 3 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,a[101]={0},i,j,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
		scanf("%d",&a[i]);
		for(j=1;j<a[i];j++)
		{
			if((a[i]%j)==0) 
			sum=sum+j;
		}
		if(sum==a[i])
		{
		printf("Yes\n");
		sum=0; 
		}
		else{
		
		printf("No\n");
		sum=0;
		}
	}
	return 0;
}