"""
2022-03-27 10:02:37
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 2 ms | 1624 KB
Accepted | 1 * (60 / 100) | 4 ms | 1684 KB

"""

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000]={0};
    
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	int sum=0;
    for (int i=0; i<n; i++)
    {
    	sum=0;
        for(int j=1;j<a[i];j++)
        {
        	if(a[i]%j==0)
        	{
        		sum=sum+j;
			}
		}
		if(sum==a[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
    }
    return 0;
}