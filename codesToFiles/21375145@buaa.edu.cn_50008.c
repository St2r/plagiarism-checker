"""
2022-03-27 13:17:41
TLE
0.6
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1724 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 872 KB

"""

#include<stdio.h>
int main(){
   int n;
   int i;
   long long int a=1;
   double e=1.0;
   scanf("%d",&n);
   if(n<=25){
   	 for(i=1;i<=m;i++){
   	 	a=a*i;
   	 	e=(double)1/a+e;
		}
	else{
		
		for(i=1;i<=25;i++){
			d=d*i;
			e=(double)1/a+e;
		}
	}	
	
   printf("%.14llf",e);
	return 0;
}