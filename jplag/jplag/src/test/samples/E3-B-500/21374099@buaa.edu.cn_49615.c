"""
2022-03-29 22:23:15
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1576 KB
Accepted | 1 * (35 / 100) | 0 ms | 1692 KB
Accepted | 1 * (60 / 100) | 2 ms | 1660 KB

"""

#include <stdio.h>

int main()
{
    int n,i,m,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&a);
    	m=0;
    	for(b=1;b<a;b++){
    		if(a%b==0)
    		{
    			m=m+b;
			}
		}
		if(m==a){
			printf("YES\n");
		}else{
	    	printf("NO\n");
	    }
	}
    return 0;
}