"""
2022-03-26 15:54:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1696 KB
Accepted | 1 * (35 / 100) | 3 ms | 1708 KB
Accepted | 1 * (60 / 100) | 5 ms | 1596 KB

"""

#include<stdio.h>

int main()
{
    int n=0,a[101],sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=1;j<=n;j++){
       for(int i=1;i<a[j];i++){
        if(a[j]%i==0){
            sum+=i;
        }
       }
       if(sum==a[j]){
            printf("YES\n");
        }
        else printf("NO\n");
        sum=0;
    }
return 0;
}