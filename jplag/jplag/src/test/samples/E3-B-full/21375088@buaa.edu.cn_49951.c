"""
2022-03-28 20:40:07
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1576 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
    int n,a,c[101],d,sum=0;
    scanf("%d",&n);
    for(a=0;a<n;a++){
        scanf("%d",&c[a]);
    
    
        for(d=1;d<c[a];d++)
        {if(c[a]%d==0)
                sum=sum+d;}
        
    if(sum==c[a]){
        printf("YES\n");}
            else
            {printf("NO\n");}
        sum=0;
    }
    
    return 0;
}