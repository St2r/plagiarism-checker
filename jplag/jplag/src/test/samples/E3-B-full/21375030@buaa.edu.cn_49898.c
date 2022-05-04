"""
2022-03-26 20:05:58
AC
1.0
Accepted | 1 * (5 / 100) | 21 ms | 1636 KB
Accepted | 1 * (35 / 100) | 12 ms | 1708 KB
Accepted | 1 * (60 / 100) | 17 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
	int n,a[100],i=0,x,y,sum;
	scanf("%d",&n);
	while(i<n){
	scanf("%d",&a[i]);
	i=i+1;}
	for(x=0;x<n;x=x+1){
	sum=0;
	for(y=1;y<a[x];y=y+1){
		if(a[x]%y==0)
		sum=sum+y;}
	if(sum==a[x])
	printf("YES\n");	
	else
	printf("NO\n");}
	return 0;
}