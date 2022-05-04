"""
2022-03-29 00:04:24
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 2 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
int n,i,j;
int t[105]={0};//所有因数和 
int a[105];
scanf("%d",&n);//要判断n个数是否为合数 

for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);//依次输入这n个数 ，保存在数组a[105]中 
}

for(i=0;i<n;i++)
{
	for(j=1;j<a[i];j++)//从1开始检查是不是a[i]的因数 
	{
	if(a[i]%j==0)t[i]+=j;
	}
}

for(i=0;i<n;i++)//从第一个数开始检查是否是合数 
{
if(t[i]==a[i])printf("YES\n");
else printf("NO\n");
}


return 0;
}