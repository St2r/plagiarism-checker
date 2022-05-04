"""
2022-03-28 20:57:34
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1580 KB
Accepted | 1 * (35 / 100) | 0 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
    int n,i,k,m,l;
    scanf("%d",&n);
    int a[100];
    while(n--){
    scanf("%d",&m);
    i=0,l=0;
    for(k=1;k<m;k++){
            if((m%k)==0){
             a[i]=k;
             i++;
            }
        }
    while(i--){
        l=l+a[i];
    }
    if(l==m){
            printf("YES\n");
                   }else{
                   printf("NO\n");
                   }
    }
    return 0;
}