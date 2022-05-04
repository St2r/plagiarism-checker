"""
2022-03-26 09:36:54
AC
1.0
Accepted | 1 * (5 / 100) | 7 ms | 1656 KB
Accepted | 1 * (35 / 100) | 3 ms | 1584 KB
Accepted | 1 * (60 / 100) | 10 ms | 1528 KB

"""

#include<stdio.h>
int main()
{
	int a[102]={0};
	int i=1,j=1,k=1,sum[102]={0},n,m;
	scanf("%d",&n);
	while(i<=n)
	{
	scanf("%d",&a[i]);
	i++;	
	}
	for(j=1;j<=n;j++)
	{
	 for(m=a[j]-1;m>0;m--)
	 {
		if(a[j]%m==0)
		{
			sum[j]=sum[j]+m;
		}
	 }
    }
	while(k<=n){
	if(sum[k]==a[k])
	 printf("YES\n");
	 else
	 printf("NO\n");
	 k++;
	 }
	return 0;
}