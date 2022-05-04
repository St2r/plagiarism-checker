"""
2022-03-26 09:38:43
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1584 KB
Accepted | 1 * (35 / 100) | 2 ms | 1588 KB
Accepted | 1 * (60 / 100) | 12 ms | 1532 KB

"""

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define ll long long
#define eps 1e-10

int main()
{
    int n,inp,sum=0,k;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&inp);
        for(int i=1;i*i<=inp;i++){
            if(inp%i==0){
                k=inp/i;
                sum+=i;
                sum+=k;
            }
        }
        sum-=inp;
        if(inp==sum){
            printf("YES\n");
        }else printf("NO\n");
        sum=0;
    }
    return 0;
}