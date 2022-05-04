"""
2022-03-29 01:14:43
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1696 KB
Accepted | 1 * (35 / 100) | 0 ms | 1696 KB
Accepted | 1 * (60 / 100) | 3 ms | 1744 KB

"""

#include<stdio.h>
int main()
{
    int  m=0,a,n[100000],i,sum=0;
    scanf("%d",&a);
    while (m<a) 
	{ 
	scanf("%d",&n[m]);
m++;
}
for(m=0;m<a;m++)
   {	for(i=1;i<n[m];i++)
		{
		 if(n[m]%i==0)sum=sum+i;
		}
		if(sum==n[m])printf("YES\n");
		else printf("NO\n");
		sum=0;
}
	return 0;
}