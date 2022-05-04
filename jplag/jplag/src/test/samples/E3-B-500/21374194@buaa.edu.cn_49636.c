"""
2022-03-29 15:07:14
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 0 ms | 1580 KB

"""

#include <stdio.h> 
int main() 
{  
    int b,n;  
    scanf("%d",&b);  
    while(b--){  
    scanf("%d",&n);  
    if(n==6||n==28||n==496||n==8128)
    {   
        printf("YES\n");  
    }else  
        printf("NO\n"); 
    }  
return 0; 
}