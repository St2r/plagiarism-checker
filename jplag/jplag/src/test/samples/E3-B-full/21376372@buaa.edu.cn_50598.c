"""
2022-03-26 18:44:20
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1636 KB
Accepted | 1 * (35 / 100) | 2 ms | 1540 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

#include<stdio.h>
int main()
{
	int i,j,n,num,ans;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		ans=0;
		scanf("%d",&num);
		for(j=1;j<num;j++)
		{
			if((num%j)==0)
			ans+=j;
		}
		if(ans==num)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
	
}