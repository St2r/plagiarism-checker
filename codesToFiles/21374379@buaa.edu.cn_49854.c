"""
2022-03-29 17:01:46
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (4 / 10) | 0 ms | 1664 KB

"""

#include<stdio.h>
int main(){
	int n,i;
	double r=1.0,sum=1.0;
	scanf("%d",&n);
	if(n<18){
		for(i=1;i<=n;i++){
			r=(r/i);
			sum=sum+r; 
			}
		}
	if(n>=18){
		for(i=1;i<18;i++){
			r=(r/i); sum=sum+r;
			}
		} 
	printf("%.14f",sum);
	return 0; 
	}