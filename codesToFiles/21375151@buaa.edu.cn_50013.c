"""
2022-03-26 14:12:02
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 3 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1688 KB
Accepted | 1 * (2 / 10) | 3 ms | 1720 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include<stdio.h>
int main()
{
	int n,j,i;
	double s=1,x=1;
	scanf("%d",&n);
	if(n<=20){
		for(i=1;i<=n;i++){
			for(j=i;j>0;j--){
				x=x/j;
			
			}	
			s+=x;
			x=1;
		}
	}
	else{
		for(i=1;i<20;i++){
			for(j=i;j>0;j--){
				x=x/j;
			}
			s+=x;
			x=1;
		}
	}
	printf("%.14f",s);
}