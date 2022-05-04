"""
2022-03-27 20:50:58
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1632 KB
Accepted | 1 * (35 / 100) | 10 ms | 1612 KB
Accepted | 1 * (60 / 100) | 20 ms | 1568 KB

"""

#include<stdio.h>
int main()
{
	int n,a,i,sum,j,z;
    scanf("%d",&n);
    for(z=0;z<n;z++)
	{
		scanf("%d",&a);
		if(a==1)
			printf("YES\n");
		else
		{
			sum=0;
			for(i=1;i<a;i++)
			{
		 		if(a % i==0)
		 		sum=sum+i;
		  	}
		 	if(sum==a)
		  		printf("YES\n");
	     	else
		  		printf("NO\n");
	    }
	    
	}
	return 0;  
}