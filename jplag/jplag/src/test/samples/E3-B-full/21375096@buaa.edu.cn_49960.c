"""
2022-03-27 12:19:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1552 KB
Accepted | 1 * (60 / 100) | 3 ms | 1540 KB

"""

#include<stdio.h>
	int main()
	{
		int n,i,xi,t,sum=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			sum=0;
			scanf("%d",&xi);
			for(t=1;t<xi;t++){
				if((xi%t)==0)
				    sum=sum+t;
		   }
				if(xi==sum)
				printf("YES\n");
				else
				printf("NO\n");
		}
		return 0;
	 }