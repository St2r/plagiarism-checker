"""
2022-03-29 22:07:21
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 2 ms | 1576 KB

"""

#include <stdio.h>

int main()
{
    int num;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	
	
    scanf("%d",&num);
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
    return 0;
}