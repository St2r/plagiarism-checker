"""
2022-03-27 23:07:38
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 3 ms | 1612 KB
Accepted | 1 * (60 / 100) | 5 ms | 1612 KB

"""

#include <stdio.h>

int main()
{
    int n,sum[1000]={0};
    scanf("%d",&n);
    int a[1000];
    int i,k,j;
       for(j=0;j<n;j++){
        scanf("%d",&a[j]);}
         for(i=0;i<n;i++){
        for(k=1;k<a[i];k++){
            if(a[i]%k==0)
                sum[i]=sum[i]+k;
        }

                if(sum[i]==a[i])
        printf("YES\n");
        else
            printf("NO\n");}
        return 0;


}