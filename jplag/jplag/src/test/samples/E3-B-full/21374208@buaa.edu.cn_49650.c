"""
2022-03-27 17:32:27
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1704 KB

"""

#include <stdio.h>
int main(){
	int i,n;
	scanf("%d",&i);
	int a[i+5];
	int x,y;
	
	while(n<i){
	scanf("%d",&a[n]);
	n++;
	}
	
	for(n=0;n<i;n++){
		y=0;
		for(x=1;x<a[n];x++){
				if(a[n]%x==0){
				y=y+x;
			}
			
		}
		
		if(y==a[n]){
			printf("YES\n");
		}
		else
		printf("NO\n");
	}

	
	return 0;
}