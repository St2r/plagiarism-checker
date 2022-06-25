"""
2022-03-26 09:03:13
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1664 KB
Accepted | 1 * (1 / 4) | 2 ms | 1664 KB
Accepted | 1 * (1 / 4) | 9 ms | 1616 KB
Accepted | 1 * (1 / 4) | 10 ms | 1712 KB
 | 7 ms | 1692 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 892 KB

"""

#include <stdio.h>
int main() {
	int n,i,t=1;
	double sum=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		t*=i;
		if(t>100000000000000){
			break;
		} 
		sum+=1.0/t;
	}
	printf("%.14f\n",sum);
	return 0;
}