"""
2022-03-27 09:22:08
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 5 ms | 1684 KB

"""

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n,i,j,k,num=0;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		for(j=1;j<ar[i];j++)
		{
			if(ar[i]%j==0)
			{
				num=num+j;
			}
		}
		if(num==ar[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		num=0;
	}
	
	
	
	return 0;
}