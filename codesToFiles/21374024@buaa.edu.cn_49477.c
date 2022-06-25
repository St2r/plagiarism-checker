"""
2022-03-28 22:47:11
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int min = n;
	if(17<n){
		min = 17;
	} 
	double sum = 1;
	double number[min];
	int i,j;
	for(i=1;i<=min;i++){
		number[i-1] = 1;
		for(j=1;j<=i;j++){
			number[i-1] = (1.0)*number[i-1]/j;
		}
		sum += number[i-1];
	}
	printf("%.14f",sum);
	return 0;
}