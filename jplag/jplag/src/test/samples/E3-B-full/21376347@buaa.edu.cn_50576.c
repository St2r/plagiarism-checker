"""
2022-03-28 11:28:14
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1676 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
    int n, k, j, s,i;
    scanf ("%d", &n);
    int x[n];
    for (i=0; i<n; i++)
        scanf ("%d", &x[i]);
    for (i=0; i<n; i++){
        int a[500]={0};
        for (k=1, j=0; k<x[i]; k++){
            if (x[i]%k==0){
                a[j]=k;
                j=j+1;
            }
        }
    for (s=0,j=0;j<500;j++ )
        s= s + a[j];
    
	if (x[i]==s) printf ("YES\n");
    else printf ("NO\n");
    }
    return 0;
}