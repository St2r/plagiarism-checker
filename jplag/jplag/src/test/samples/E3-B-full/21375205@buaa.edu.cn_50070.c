"""
2022-03-26 09:17:09
AC
1.0
Accepted | 1 * (5 / 100) | 20 ms | 1608 KB
Accepted | 1 * (35 / 100) | 12 ms | 1664 KB
Accepted | 1 * (60 / 100) | 22 ms | 1528 KB

"""

# include<stdio.h>
int main(){
	int  cnt,n,i,sum,j;
	scanf("%d",&cnt);
	for(j=1;j<=cnt;j++)
	{
		scanf("%d",&n);
		sum=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==n){
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}