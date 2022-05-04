"""
2022-03-29 18:31:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 12 ms | 1628 KB

"""

#include<stdio.h>
int main(){
	int n,a[100],m[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{scanf("%d",&a[i]);
	m[i]=0;}
	
	for(int i=0;i<n;i++)
	/*if(a[i]=1)
	m[i]=1;
	else{*/
	for(int j=1;j<a[i];j++)
	if(a[i]%j==0)
	m[i]=m[i]+j;
	
	for(int i=0;i<n;i++)
	if(m[i]==a[i])
	printf("YES\n");
	else
	printf("NO\n");
	
	
	
	return 0;
}