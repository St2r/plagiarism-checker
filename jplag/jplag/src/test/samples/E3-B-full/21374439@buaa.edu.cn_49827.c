"""
2022-03-29 22:19:20
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 2 ms | 1628 KB

"""

#include<stdio.h>>
int main()
{
    int n,i,a,b;
   scanf("%d",&n);
   for(i = 1; i<=n;i++)
   {
   	scanf("%d",&b);
	   int sum=0;
   	for(a=1;a<b;a++){
   		if(b%a==0)
   		sum+=a;
	   }
   	if(b==sum)
   	printf("YES\n");
   	else
   	printf("NO\n");
   	
   }
   return 0;
}