"""
2022-03-26 21:52:20
AC
1.0
Accepted | 1 * (5 / 100) | 7 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1552 KB


"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, m, pan,i;
    scanf ("%d", &n);
    int x[n];
    for (i=0; i<n; i++)
        scanf ("%d", &x[i]);
    for (i=0; i<n; i++){
        int a[500]={0};
        for (k=1, m=0; k<x[i]; k++){
            if (x[i]%k==0){
                a[m]=k;
                m=m+1;
            }
        }
        for (pan=0,m=0;m<500;m++ )
            pan= pan + a[m];
        if (x[i]==pan)
            printf ("YES\n");
        else printf ("NO\n");
    }
    return 0;
}