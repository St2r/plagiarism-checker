"""
2022-03-27 10:12:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int n,i,a[100],b,k,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		b=0;
	for(k=2;k<=a[i]-1;k++){
	if(a[i]%k==0){
	l=a[i]/k;	b=b+k+l;}
		}
		b=b/2+1;
		if(b==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
	
	}