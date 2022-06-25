"""
2022-03-29 10:46:38
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 0 ms | 1748 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>
int main()                        
{
	int i, j, n;             
	double item, sum;          
	sum=1;
	scanf("%d", &n);         
	for(i=1; i<=n; i++){
		item=1;               
		for(j=1; j<=i; j++){   
			item=item*j;
		}
		item=1.0/item;
		sum=sum+item;            
	}
	printf("%.14f", sum);
	
	return 0;
}