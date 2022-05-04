"""
2022-03-28 20:59:56
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1568 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1676 KB

"""

#include<stdio.h>
int main(){
    int n,a,b=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       scanf("%d",&a);
       int sum=0;
       for(int j=1;j<=a/2;j++)
           if(a%j==0)sum+=j;
       if(sum==a)printf("YES\n");
       else printf("NO\n");
    }
    return 0;
}