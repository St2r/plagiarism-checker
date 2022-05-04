"""
2022-03-27 16:13:45
AC
1.0
Accepted | 1 * (1 / 3) | 2 ms | 1600 KB
Accepted | 1 * (1 / 3) | 2 ms | 1624 KB
Accepted | 1 * (1 / 3) | 357 ms | 1704 KB


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