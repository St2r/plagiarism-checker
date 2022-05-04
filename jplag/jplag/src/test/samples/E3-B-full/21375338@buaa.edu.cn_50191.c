"""
2022-03-26 09:12:15
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 3 ms | 1636 KB
Accepted | 1 * (60 / 100) | 17 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n,x,sum=0,i,j;
	scanf("%d", &n);
	for(j=0;j<n;j++)
	{ 
		sum =0;
		scanf("%d", &x);
		for(i=x;i>=1;i--){
		if(x % i ==0&&x!=i)
		sum += i;
	} 
	if(sum==x)
	printf("YES\n");
	else
	printf("NO\n");
	}
	return 0;
 }