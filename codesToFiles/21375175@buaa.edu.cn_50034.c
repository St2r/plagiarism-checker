"""
2022-03-29 23:37:24
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 0 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1756 KB

"""

#include <stdio.h>
int main()
{
	int i,j,n;
	double item,sum;
	sum=1;
	scanf("%d",&n);
	if(n<100){
	for(i=1;i<=n;i++){
		item=1;
		for(j=1;j<=i;j++){
			item=item*j;
		}
		item=1.0/item;
		sum+=item;
		}
	}else{
		for(i=1;i<=100;i++){
		item=1;
		for(j=1;j<=i;j++){
			item=item*j;
		}
		item=1.0/item;
		sum+=item;	
		}
	}
	printf("%.14f",sum);
	return 0;	
}