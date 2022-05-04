"""
2022-03-29 20:29:39
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1728 KB
Accepted | 1 * (35 / 100) | 1 ms | 1576 KB
Accepted | 1 * (60 / 100) | 2 ms | 1664 KB

"""

#include <stdio.h>

int sum(int);  
int main() 
{
	int n,sum;
	int i=1,j;
	scanf("%d",&n);
	int a;    
    while(i<=n)  
	{
		scanf("%d", &a);
		int sum = 0,j=1;
	    for(j=1; j<= a-1;j++)
		if(a%j == 0)
	    sum += j;
        if(sum==a)
        printf("YES\n");
        else
        printf("NO\n");
        i++;
	}
	return 0;
}