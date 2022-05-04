"""
2022-03-27 09:53:32
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1616 KB
Accepted | 1 * (35 / 100) | 2 ms | 1624 KB
Accepted | 1 * (60 / 100) | 4 ms | 1616 KB

"""

#include<stdio.h>
int main()
{
	int i,j,n,x;
	int sum;
	scanf("%d",&n);

	for(i=0;i<n;i++)
    {
    	sum=0;
    	scanf("%d",&x); 
        for(j=1;j<x;j++)
		{
            if(x%j==0){
                sum=j+sum;
            }
        }
        if(sum==x){
        	printf("YES\n");
		}
		else{
			printf("NO\n");
		}
    }
    return 0;
}