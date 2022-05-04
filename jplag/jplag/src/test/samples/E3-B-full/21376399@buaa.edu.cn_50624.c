"""
2022-03-28 22:40:57
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1636 KB
Accepted | 1 * (60 / 100) | 3 ms | 1572 KB

"""

#include<stdio.h>
int main()
{
    int a,x[10000], sum, n;  
    scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
	}                           
    for( int i=0; i<n; i++ )
    {
        sum=0; 
        for( a=1; a<x[i]; a++ )
        {
            if(x[i]%a == 0)
                sum += a;
        }
        if(sum == x[i]){
	            printf("YES\n");
        }
	    else
	    printf("NO\n");
    }
    return 0;
}