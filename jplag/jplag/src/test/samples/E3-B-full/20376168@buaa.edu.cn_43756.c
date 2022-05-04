"""
2022-03-29 23:19:45
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1648 KB

"""

#include<stdio.h>
int gcd(int ,int );
int main()
{
	int a,n,sum=0;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		sum=0;
	scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
	if(a%i==0)
		{
		sum=sum+i;

		}
		
	}	

    if(sum==a)
    {
    printf("YES\n");}
    else
    {
    printf("NO\n");}
}
return 0;
}