"""
2022-03-27 11:11:22
AC
1.0
Accepted | 1 * (5 / 100) | 6 ms | 1652 KB
Accepted | 1 * (35 / 100) | 3 ms | 1628 KB
Accepted | 1 * (60 / 100) | 11 ms | 1700 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
{		int a;
		int sum=0;
		scanf("%d",&a);
		for(j=1;j<a;j++)
		{
		if((a%j)==0)
		sum+=j;
		}
		if(a!=sum)
		{		
		printf("NO\n");}
		else if(sum==a){
		printf("YES\n");}
		
}
return 0;
}