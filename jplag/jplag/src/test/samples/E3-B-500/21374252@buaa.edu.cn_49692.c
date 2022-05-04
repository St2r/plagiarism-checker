"""
2022-03-28 09:01:54
AC
1.0
Accepted | 1.0 * (3 / 15) | 3 ms | 1640 KB
Accepted | 1.0 * (2 / 15) | 2 ms | 1712 KB
Accepted | 1.0 * (4 / 15) | 2 ms | 1724 KB
Accepted | 1.0 * (1 / 15) | 3 ms | 1716 KB
Accepted | 1.0 * (5 / 15) | 2 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n;
	int i=0;
	int j=1;
	int sum=0;
	int m;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&m);
		i++;
		while(j<m){
			if((m%j)==0){
				sum=sum+j;	
			}
			j++;
		}
		if(sum==m){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		sum=0;}
	return 0;
}