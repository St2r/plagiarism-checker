"""
2022-03-26 08:12:38
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1600 KB
Accepted | 1 * (60 / 100) | 4 ms | 1604 KB

"""

#include <stdio.h>

int perfect(int x){
	int sum,i,y;
	sum = 0;
	y = 0;
	for(i=1;i<x;i++){
		if(x%i == 0)
		sum += i;
	}
	if (sum == x)
	y = 1;
	
	return y;
}


int main() {

	int n,i,k;
	
	scanf("%d",&n);
	
	int a[100]={0};
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

    for(k=0;k<n;k++){
    	if( perfect(a[k])==1)
    	printf("YES\n");
    	else 
    	printf("NO\n");
	}
	

    
    
	return 0;
}