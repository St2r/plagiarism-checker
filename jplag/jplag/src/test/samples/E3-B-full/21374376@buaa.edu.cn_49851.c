"""
2022-03-27 15:27:11
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
	int n,x,s,a;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		for(int k=1;k<x;k++){
			a=x%k;
			if(a==0){
		    	s+=k;
		    }
		}
		if(s==x){
			printf("YES\n");
	    }
	    else{
	    	printf("NO\n");
	    }
	    s=0;
	}
	return 0;
}