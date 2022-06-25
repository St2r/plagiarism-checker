"""
2022-03-29 20:16:52
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include <stdio.h> 
int main(){
	int n;
	scanf("%d",&n);
	
	int i,a=1e-14;
	long long sum=1;
    double t=1.0;
	for(i=1;i<=n;i++){
	    sum=sum*i;
		t+=1.0/sum;
		if((1.0/sum)<=a)
		break;	
    }
	
	printf("%.14f",t);
	return 0;
}