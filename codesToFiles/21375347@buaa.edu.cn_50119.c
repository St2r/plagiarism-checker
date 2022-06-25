"""
2022-03-29 22:45:57
REP
0.1
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Wrong Answer | 0 * (1 / 10) | 1 ms | 1644 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1712 KB
Runtime Error (SIGFPE) | 0 * (2 / 10) | 133 ms | 1488 KB
Runtime Error (SIGFPE) | 0 * (4 / 10) | 133 ms | 1392 KB

"""

#include <stdio.h>

int main(){
    int n,i,k;
    long a=1;
    double e=1.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
   
    k=i;
    while(k>0){
    a*=k;
    k--;
    }
    e=(double)e+1/a;
    }
    printf("%.14f\n",e);
    
    return 0;
}