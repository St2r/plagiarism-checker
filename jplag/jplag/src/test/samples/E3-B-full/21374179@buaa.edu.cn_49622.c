"""
2022-03-26 14:31:08
AC
1.0
Accepted | 1 * (1 / 10) | 8 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 3 ms | 1700 KB
B

"""

#include <stdio.h>
int main()
{
	int n,a[101],i,j=1,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);//yes
	
	for(i=0;i<n;i++){  //yes
	while(j<a[i]-1){
	    if(a[i]%j==0)
			sum=sum+j;
		j++;
	}
		if(sum==a[i])
		printf("YES\n");
	    else
		printf("NO\n");
		sum=0;
		j=1;
	}
	
	
	return 0;
}