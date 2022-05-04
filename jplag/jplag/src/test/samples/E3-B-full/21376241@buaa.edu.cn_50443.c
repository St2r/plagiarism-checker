"""
2022-03-28 23:02:27
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 3 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
    int i, j, s, n,a; 
    scanf("%d\n", &n);
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a);
    s=0;
    for( j=1; j<a; j++ )
    {
        if(a%j == 0)
            s += j;
    }
    if(s == a)
        printf("YES\n");
    else
        printf("NO\n");
	}
    return 0;
}