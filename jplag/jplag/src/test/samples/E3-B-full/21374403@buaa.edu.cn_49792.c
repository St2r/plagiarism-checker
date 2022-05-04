"""
2022-03-27 20:04:54
AC
1.0
Accepted | 1 * (3 / 5) | 2 ms | 1640 KB
Accepted | 1 * (1 / 5) | 11 ms | 1532 KB
Accepted | 1 * (1 / 5) | 9 ms | 1612 KB

"""

#include <stdio.h>
int main()
{
    int i,a,total=0,n,p;
    scanf("%d",&n);
    for(p=0;p<n;p++){
    scanf("%d",&a);
    for(i=1;i<a;i++){
        if(a%i==0){
            total=total+i;
        }
    }
    if(total==a){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    total=0;
}
    return 0;
}