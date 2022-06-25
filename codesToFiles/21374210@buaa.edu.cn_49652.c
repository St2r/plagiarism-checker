"""
2022-03-28 22:10:37
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 0 ms | 1644 KB

"""

#include <stdio.h>
int main(){
	int n,i;
	double sum=1,k=1;
	scanf("%d",&n);
	if(n<=25){
	for(i=1;i<=n;i++){
	k=k/i;
	sum=sum+k;
	}}
	else{for(i=1;i<=25;i++){
	k=k/i;
	sum=sum+k;}
		
	}
	printf("%.14f",sum);
	return 0;
}