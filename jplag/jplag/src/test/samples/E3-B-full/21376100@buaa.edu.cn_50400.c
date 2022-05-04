"""
2022-03-29 22:39:55
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1676 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1568 KB

"""

#include<stdio.h>
int main()
{
	int j, n, a;
	scanf("%d\n", &n);
	for(j=1; j<=n; j++)
	{
		int k=0, i;
	    scanf("%d",&a);
	    for(i=1; i<a; i++)
	    {
		    if(a % i == 0){
			k=k+i;
	  	    }
		}
	if(k==a)
	{
	printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	}
	
	return 0;
}