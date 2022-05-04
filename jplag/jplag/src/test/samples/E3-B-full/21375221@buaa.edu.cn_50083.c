"""
2022-03-29 12:20:29
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1588 KB
Accepted | 1 * (60 / 100) | 3 ms | 1588 KB

"""

#include<stdio.h>
int main()
{
	int n,a[101],i,j,k,l,p,sum,b[10001];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}  //输入n个数 
	for(l=0;l<n;l++)
	{k=0;
	for(j=1;j<a[l];j++)	
	{
	if(a[l]%j==0)
	{
	b[k]=j;
	k++;}}
	             // 找出所有公因数 
	sum=0;
	for(p=0;p<k;p++)
	{
	sum=sum+b[p];}
	if(sum==a[l])
	printf("YES\n");
	else
	printf("NO\n");  }  //判断每一个数据是否为完全数 
	return 0;
	
	
}