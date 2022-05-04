"""
2022-03-27 09:53:45
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 2 ms | 1676 KB
Accepted | 1 * (60 / 100) | 4 ms | 1644 KB

"""

#include <stdio.h>
int main()
{
    int n,b,c=0,a,sum;
    scanf("%d",&n);
    while (c<n){
        scanf("%d",&a);
        c++;
        b=a-1;
        sum = 0;
        while (b>0){
            if (a%b==0)
                sum = sum +b;
            b--;
	    }
	    if(a==1)
	       printf("YES\n");
        else if (sum==a)
            printf("YES\n");
        else
            printf("NO\n");}
     return 0;
	}