"""
2022-03-26 15:07:31
AC
1.0
Accepted | 1 * (1 / 4) | 7 ms | 1644 KB
Accepted | 1 * (1 / 4) | 2 ms | 1692 KB
Accepted | 1 * (1 / 4) | 2 ms | 1616 KB
Accepted | 1 * (1 / 4) | 2 ms | 1620 KB


"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	double sum=0;
	for(int i=1;i<=n;i++){
			double m=1;
		for(int k=i;k>=1;k--){
			m=m/k;
		}
		sum=sum+m;
	}
	sum++;
	printf("%.14f",sum);
		
	
	
	
	return 0;
}