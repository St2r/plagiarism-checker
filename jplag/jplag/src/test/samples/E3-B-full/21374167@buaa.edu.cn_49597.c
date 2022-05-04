"""
2022-03-28 23:23:03
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1584 KB
Accepted | 1 * (60 / 100) | 4 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
	int n,t,i,k,m;
	scanf("%d\n",&n);
    int a;
    for(i=0;i<n;i++)
    {
    	t=0;
	    scanf("%d",&a);
        for(m=1;m<=a/2+1;m++)
	    {
	    	if(a%m!=0){
	    		continue;
			}
		    for(k=1;k<=a;k++)
		    {
			    if(m*k==a&&m<=k)
			    {
				    t=m+k+t;
				    break;
			    }
		    }
	    }
	    if(t==2*a)
	    {
	    	printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}