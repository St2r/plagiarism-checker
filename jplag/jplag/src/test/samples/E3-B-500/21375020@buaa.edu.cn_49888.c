"""
2022-03-27 16:52:08
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1528 KB
Accepted | 1 * (35 / 100) | 11 ms | 1604 KB
Accepted | 1 * (60 / 100) | 14 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x[n];
	int i=0,j=0;
	int summ=0; 
	while(i<n){
		scanf("%d",&x[i]);
		i++;
	}
    i=0;
    while(i<n){
    	j=1;
    	while(j<x[i]){
    		if(x[i]%j==0){
    			summ+=j;
			}
			j++;
		}
		if(summ==x[i]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		i++;
		summ=0;
	}
	
	return 0;
}