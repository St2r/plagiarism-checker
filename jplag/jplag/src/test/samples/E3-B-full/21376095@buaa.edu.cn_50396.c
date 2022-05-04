"""
2022-03-29 21:24:42
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1576 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include <stdio.h>

int main()
{
    int n,a,i,j;
    int sum=0;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&a);
    	for(j=1;j<a;j++)
    	{
    		if(a%j==0)
    		{
    			sum+=j;			
	}
	else
	{
		sum=sum;
	}
		}
		if(sum==a){
		printf("YES\n");
	}
	else{
		printf("NO\n");
			}
			sum=0;
	}
	
	
    return 0;
}