"""
2022-03-27 09:24:28
TLE
0.4
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1680 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 940 KB

"""

#include <stdio.h>
# include <math.h>
int main()
{
    
    int b=1,n,i,j;double a=0;double c=1;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
    	
    	for(j=1;j<=i;j++){	
		b*=j;
		}
		c+=1.00/b;
		b=1; 	
	}
	printf("%.14lf\n",c);
    return 0;
}