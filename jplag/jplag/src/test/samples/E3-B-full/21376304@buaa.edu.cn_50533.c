"""
2022-03-26 23:17:39
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1664 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 12 ms | 1712 KB

"""

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int gyt,xtt;
		scanf("%d",&gyt);
		xtt=gyt;
		for(int g=1;g<gyt;g++){
			if(gyt%g==0){
				xtt=xtt-g;
			}
			
		}
		if(xtt==0){
				printf("YES\n");
			}
			else{
			
				printf("NO\n");
			}
		
	}
	return 0;	
}