"""
2022-03-27 21:22:04
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1616 KB

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