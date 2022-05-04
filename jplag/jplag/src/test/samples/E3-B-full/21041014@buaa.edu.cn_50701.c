"""
2022-03-29 10:22:50
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1580 KB

"""

#include <stdio.h>
int main()
{
    int a, i,num, sum = 0;
    scanf("%d",&num);
    for(int n=1;n<=num;n++)
	{
	scanf("%d", &a);
    for(i = 1; i<a; i++)
    {
        if(a%i == 0)
        {
            sum += i;
        }
    }
    if(sum == a) {
	printf("YES\n");
	sum=0;
	}
    else {
	printf("NO\n");
	sum=0;
	}
	}
    
    return 0;
}