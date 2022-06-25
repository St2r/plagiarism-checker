"""
2022-03-29 19:56:51
WA
0.4
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1684 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1716 KB
Wrong Answer | 0 * (4 / 10) | 2 ms | 1668 KB

"""

#include<stdio.h>
int fn(int i);
int main(){
	double a[1000],e=0;
	int i,n;
	
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
		a[i]=1.0/fn(i);
		e+=a[i];
		if(a[i]<1e-15){
			break;
		}
	}
	
	printf("%.14lf\n",e);
	
	return 0;
}

int fn(int i){
	if(i<=1){
		return 1;
	}
	return i*fn(i-1);
}