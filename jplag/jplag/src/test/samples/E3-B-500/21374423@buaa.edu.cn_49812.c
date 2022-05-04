"""
2022-03-29 11:18:01
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1624 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1580 KB

"""

#include<stdio.h>
void hyd();

int main()
{
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
    hyd();
    }
    return 0;
}

void hyd(){
    int a, b, c, d;
    scanf("%d", &a);
    b=1;
    c=0;
    while(b<a){
        if(a%b==0){
            c=c+b;
            }
        b=b+1;
        }
    if(c==a){
    printf("YES\n");
    }
    else{
    printf("NO\n");
    }
}