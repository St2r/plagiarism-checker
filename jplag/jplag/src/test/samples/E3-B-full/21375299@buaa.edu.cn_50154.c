"""
2022-03-26 14:40:10
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int a[102],i=0,sum=1,n,j,k;
	scanf("%d",&n);
	
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=2;j<(a[i]/j);j++)
		{
			if(a[i]%j==0){k=a[i]/j;sum=sum+j+k;}
			
		}
		if((sum!=a[i])||(a[i]==1)){printf("NO\n");}
		if(sum==a[i]){printf("YES\n");}
		sum=1;
	}
	
	return 0;
}