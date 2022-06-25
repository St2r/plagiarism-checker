"""
2022-03-29 12:13:33
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 0 ms | 1712 KB

"""

#include <stdio.h>
int main(){
int n,i,j;
double s=1;
double q=1.0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        s=s*(double)(j);
    }
    q+=1.0/s;
    if(1.0/s<1e-30) break;
    s=1.00000;
}
printf("%.14lf",q);
return 0;
}