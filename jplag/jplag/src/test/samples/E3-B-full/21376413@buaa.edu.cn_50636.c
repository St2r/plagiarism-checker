"""
2022-03-28 21:08:40
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1676 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>

int main(){
	int n,i,a[100],b[100];
	int k,m;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=n-1;i>=0;i--)
	{
	b[i]=0;
    for(k=1;k<a[i];k++)
	{
		if(a[i]%k==0)
		{
		b[i]+=k;
		}
	}
}
    for(m=0;m<n;m++)
	{
	
    if(0==a[m])
	{
    	printf("NO\n");
	}
	if(b[m]==a[m])
	{
		printf("YES\n");
	}
	if(b[m]!=a[m])
	{
		printf("NO\n");
	}
}
}