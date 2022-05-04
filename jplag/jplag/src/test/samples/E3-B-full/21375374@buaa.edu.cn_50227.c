"""
2022-03-26 16:51:45
REG
0.0
Runtime Error (SIGSEGV) | 0 * (5 / 100) | 239 ms | 1452 KB
Runtime Error (SIGSEGV) | 0 * (35 / 100) | 237 ms | 1516 KB
Runtime Error (SIGSEGV) | 0 * (60 / 100) | 233 ms | 1444 KB

"""

#include<stdio.h>
int main()
{
int n,a[107],sum=0;
scanf("%d\n",&n);
for(int i=1;i<=n;i++)
 {
 	scanf("%d\n",a[i]);
 	for(int j=1;j<a[i];j++)
 	{
 		if(a[i]%j==0)
 		sum=sum+j;
	 }
	 if(sum==a[i])
	 printf("Yes\n");
	 else
	 printf("No\n");
 }
	return 0;
}