"""
2022-03-27 11:58:49
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1688 KB
Accepted | 1 * (35 / 100) | 11 ms | 1688 KB
Accepted | 1 * (60 / 100) | 13 ms | 1736 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
	int n,a,i,sum;
	scanf("%d",&n);
	while(n--)
	{
	    i=0;
		sum=0;
		int yin[10005]={0};
		scanf("%d",&a);
		for(int j=a-1;j>0;j--)
		{
			if(a%j==0)
			{
				yin[i]=j;
				i++; 
			}			
		}
		for(int k=0;k<=i;k++)
		{
			sum+=yin[k];
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");		
	}
	return 0;
}