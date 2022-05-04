"""
2022-03-29 19:12:05
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1676 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include<stdio.h>
int fun(int n);
int main()
{
    int a,n;
    scanf("%d", &n);
    while(n--)
    {
	
     
    scanf("%d", &a);
    if(fun(a)+1==a)
	printf("YES\n");
	else
	printf("NO\n");
}
	
	
}
int fun(int n)
{
    int sum = 0;
    for (int i = 2;i < n;i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}