"""
2022-03-29 22:01:03
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1668 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 3 ms | 1580 KB

"""

#include <stdio.h>

int main(){
    int n,i=0,a[99999],z=0,x,y;
    scanf("%d",&n);
   while(i<n){
scanf("%d",&a[i]);
i++;}
for(x=0;x<n;x++){
    for(y=1;y<a[x];y++){
    if(a[x]%y==0)
        z=z+y;}
        if(z==a[x])
        printf("YES\n");
        if(z!=a[x])
        printf("NO\n");
        z=0;}
    return 0;
}