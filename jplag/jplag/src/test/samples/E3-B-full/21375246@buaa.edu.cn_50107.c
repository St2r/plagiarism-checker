"""
2022-03-26 09:24:36
AC
1.0
Accepted | 1 * (1 / 4) | 9 ms | 1624 KB
Accepted | 1 * (1 / 4) | 5 ms | 1620 KB
Accepted | 1 * (1 / 4) | 8 ms | 1620 KB
Accepted | 1 * (1 / 4) | 15 ms | 1648 KB
B

"""

#include<stdio.h>
#include<math.h>
int main(){
	int n,j,i;
	int a,sum=1,k;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a);
		k=sqrt(a);
		for(j=2;j<=k;j++)
		{
			if(a==a/j*j)
			{
				sum+=a/j;
				sum+=j;
			}
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
		sum=1;
	}
	return 0; 
}