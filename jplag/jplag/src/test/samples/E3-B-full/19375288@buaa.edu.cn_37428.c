"""
2022-03-28 18:41:39
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 2 ms | 1600 KB
Accepted | 1 * (60 / 100) | 3 ms | 1632 KB

"""

#include<stdio.h>
#include<math.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int a;

    for(int j=0;j<n;j++)
    {
    	int sum=0;
    	int i=1;
    	scanf("%d",&a);
    	for(i=1;i<=((a/2)+1);i++)
    	{
    		if(a%i==0) sum+=i;
		}
		if(sum==a)  printf("YES\n");
		else printf("NO\n");
	}
	
    return 0;
}