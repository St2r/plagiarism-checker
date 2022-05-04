"""
2022-03-28 20:52:10
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1568 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 0 ms | 1736 KB

"""

#include <stdio.h>
int main()
{
    int n,z;
    scanf("%d",&z);
    for(int k=0;k<z;k++)
	{
      scanf("%d",&n);
        if(n==6||n==28||n==496||n==8128)
             printf("YES\n");
        else
             printf("NO\n");
    }
    return 0;
}