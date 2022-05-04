"""
2022-03-27 11:12:28
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1552 KB
Accepted | 1 * (35 / 100) | 3 ms | 1548 KB
Accepted | 1 * (60 / 100) | 7 ms | 1704 KB

"""

#include<stdio.h>
int cnt[1005];
int main()
{
	int n,num,i,j,sum;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{  sum=0;
		scanf("%d",&num);
		for(i=1;i<num;i++)
		{
			if(num%i==0)
			 sum+=i;
		  
		}
		if(sum==num)
		cnt[j]=1;
		else
		cnt[j]=0;
	}
	for(j=0;j<n;j++)
	 {
	 	if(cnt[j]==1)
	 	 printf("YES\n");
	 	 else
	 	 printf("NO\n");
	 }
	 return 0;
	
}