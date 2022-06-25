"""
2022-03-29 14:27:59
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1720 KB
Accepted | 1 * (4 / 10) | 1 ms | 1692 KB

"""

#include <stdio.h>
#include <math.h>
int main(){
	int n;
	double e=1,b;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i>17){
			break;
		}
		b=1;
		for(int j=1;j<=i;j++){
		b*=j;
		}
		e+=1/b;
	
	}
	printf("%.14f",e);
	return 0;
}