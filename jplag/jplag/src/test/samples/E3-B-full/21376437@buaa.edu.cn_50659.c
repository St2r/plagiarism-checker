"""
2022-03-26 23:39:46
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1744 KB
Accepted | 1 * (35 / 100) | 9 ms | 1644 KB
Accepted | 1 * (60 / 100) | 12 ms | 1732 KB

"""

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
  
    for(int i=0;i<n;i++){
        int x=0;
        scanf("%d",&x);
        int j=0;
        int y[10001]={0};
        for(  j=1;j<x;j++){
            
            if(x%j==0){
                y[j-1]=j;
            }
        
        }
        int sum=0;
        for(int k=0;k<j;k++){
            sum+=y[k];
        }
        if(sum==x){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}