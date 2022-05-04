"""
2022-03-26 13:40:55
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 2 ms | 1560 KB
Accepted | 1 * (60 / 100) | 5 ms | 1692 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,k,x[200],y[200],s,l;
	scanf("%d",&n);

	for(i=1;i<=n;i++)//第i个数 
	{
		k=0;
		s=0;
		scanf("%d",&x[i]);//输入第i个数 
		for(j=1;j<=x[i];j++)//穷举求所有真因子 
		{
			if(x[i]%j==0)
			{
				k++;
			    y[k]=j;//储存所有真因子 
			}
		}
		for(l=1;l<=k;l++)
		s=s+y[l];
		printf((s==2*x[i])?"YES\n":"NO\n");
	}
	return 0;
}