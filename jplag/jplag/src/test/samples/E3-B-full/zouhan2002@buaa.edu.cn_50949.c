"""
2022-03-28 14:27:01
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1684 KB

"""

#include <stdio.h>
int main()
{
int n,i,j,sum;
scanf("%d",&n);
for(;n>0;n--){
    scanf("%d",&i);
    sum = 0;
    for(j = 1;j<i;j++){
        if (i%j==0){
            sum+=j;
        }
    }
    if(sum==i){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
return 0;
}