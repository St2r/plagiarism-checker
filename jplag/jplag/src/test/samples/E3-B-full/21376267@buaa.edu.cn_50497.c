"""
2022-03-26 13:05:50
AC
1.0
Accepted | 1 * (1 / 3) | 3 ms | 1620 KB
Accepted | 1 * (1 / 3) | 3 ms | 1648 KB
Accepted | 1 * (1 / 3) | 3 ms | 1652 KB

"""

#include <stdio.h>

int main()
{
    int n,i,j,sum=0,a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        for(j=1;j<a;j++){
            if(a%j==0){
                sum+=j;
            }
        }
        if(sum==a){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        sum=0;
    }

return 0;
}