"""
2022-03-29 21:08:33
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1736 KB

"""

#include <stdio.h>
#include <math.h>


int main(){
	int n,num[106]={0},a[105]={0};
	int i,j,k;
	scanf("%d",&n);
	
	for(j=1;n>0;n--)
	{
		scanf("%d",&num[j]);
		j++;
	}
	for(j=1;num[j]!=0;j++)
	{
		for(i=1;i<num[j];i++)
		{
			int c=num[j]%i;
			if(c==0 && num[j]!=i)
			{
			    a[j]+=i;
			}
			
		}
	}
	
	for(k=1;k<=j && num[k]!=0;k++)
	{
		if(num[k]==a[k])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
    return 0;
}