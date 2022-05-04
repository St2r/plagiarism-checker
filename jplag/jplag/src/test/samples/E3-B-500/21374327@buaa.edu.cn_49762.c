"""
2022-03-26 17:23:11
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 3 ms | 1644 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include<stdio.h>
int main(){
	int n,x,sum=0,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		for(int k=1;k<x;k++){
    		m=x%k;
    		if(m==0){
    			sum+=k;
	     	}
	    }
        if(sum==x){
    		printf("YES\n");
     	}
    	else{
    		printf("NO\n");
    	}
     	sum=0;
	}
	return 0;
}