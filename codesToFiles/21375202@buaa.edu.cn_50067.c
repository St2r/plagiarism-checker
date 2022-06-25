"""
2022-03-29 20:21:36
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1632 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include <stdio.h> 
int main() 
{
    int i,n;
    double sum=1,e=1;
    scanf("%d",&n);
    if(n<=16)
	{
    for(i=1;i<=n;i++){	
    e=e+1/(sum*i); 
	sum=sum*i;  
    }    
    printf("%.14f",e);
	}
	else
	printf("2.71828182845905");    
    return 0;
}