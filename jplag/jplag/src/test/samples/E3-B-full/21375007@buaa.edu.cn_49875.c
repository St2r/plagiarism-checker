"""
2022-03-29 23:50:52
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1744 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1732 KB

"""

#include<stdio.h>
int main()
{
	int n,i,k,j,sum;
	int num[100]={0};
	scanf("%d",&n);
	for(k=0;k<n;++k)
	{
	  scanf("%d",&num[k]);
	}  
	for(i=0;i<n;i++) 
	   {
	   	sum=0;
	   	for(j=1;j<num[i];j++)
		   {
		   if (num[i]%j==0)
	       sum+=j;
		   }
	   if(sum==num[i])
	   printf("YES\n");
	   else
	   printf("NO\n"); 
	   }
	return 0;
}