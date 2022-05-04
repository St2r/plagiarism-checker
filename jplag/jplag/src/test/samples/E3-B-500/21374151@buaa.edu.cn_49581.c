"""
2022-03-28 23:46:22
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1660 KB
Accepted | 1 * (35 / 100) | 0 ms | 1588 KB
Accepted | 1 * (60 / 100) | 3 ms | 1668 KB

"""

#include<stdio.h>
int main()
{
    int n,a[10005];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);}
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=1;j<a[i];j++)
           {if(a[i]%j==0)
                sum+=j;}
        if(a[i]==sum){
            printf("YES\n");}
        else
            printf("NO\n");
    }
    return 0;
}