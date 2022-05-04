"""
2022-03-27 18:33:55
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1540 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include<stdio.h> 
int main()
{
	int n,a,i=1,sum=0,j=1;
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&a);
	    while(j<a)
	    {
	   	    if(a%j==0)
	    	  sum=sum+j;
	    	j++; 
		}
		if(a==sum)
			printf("YES\n");
		else
			printf("NO\n");
		sum=0;
		j=1;
		i++;
	}
	return 0;
}