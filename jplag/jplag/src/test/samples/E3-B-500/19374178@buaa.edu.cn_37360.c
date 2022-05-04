"""
2022-03-29 16:36:12
PE
0.0
Presentation Error | 0 * (5 / 100) | 2 ms | 1648 KB
Presentation Error | 0 * (35 / 100) | 2 ms | 1696 KB
Presentation Error | 0 * (60 / 100) | 4 ms | 1544 KB

"""

#include<stdio.h>
int main()
{
    int a,b,n;
    int i,l;
    scanf("%d",&n);
    while(n--)
	{
    	scanf("%d",&a);
   		b=0;
    	for(i=1;i<a;i++)
    	{
        	if(a%i==0)
            b+=i;
    	}
    	if(a==b)
        printf("Yes\n");
    	else
        printf("No\n");
    }    
    return 0;
 
}