"""
2022-03-27 22:13:56
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (1 / 10) | 3 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include <stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	
	double sum=1,an=1;
	
	for(i=1;i<=n;i++){
		an=an/i;
		sum+=an;
		
		if(an<1e-14)
			break;
	}
	
	printf("%.14f",sum);
	
	return 0;
}